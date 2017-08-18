// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeBuild_ReShape_HeaderFile
#define _ShapeBuild_ReShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeBuild_ReShape.hxx>

#include <BRepTools_ReShape.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <ShapeExtend_Status.hxx>
class TopoDS_Shape;


//! Rebuilds a Shape by making pre-defined substitutions on some
//! of its components
//!
//! In a first phase, it records requests to replace or remove
//! some individual shapes
//! For each shape, the last given request is recorded
//! Requests may be applied "Oriented" (i.e. only to an item with
//! the SAME orientation) or not (the orientation of replacing
//! shape is respectful of that of the original one)
//!
//! Then, these requests may be applied to any shape which may
//! contain one or more of these individual shapes
class ShapeBuild_ReShape : public BRepTools_ReShape
{

public:

  
  //! Returns an empty Reshape
  Standard_EXPORT ShapeBuild_ReShape();
  
  //! Applies the substitutions requests to a shape
  //!
  //! <until> gives the level of type until which requests are taken
  //! into account. For subshapes of the type <until> no rebuild
  //! and futher exploring are done.
  //! ACTUALLY, NOT IMPLEMENTED BELOW  TopAbs_FACE
  //!
  //! <buildmode> says how to do on a SOLID,SHELL ... if one of its
  //! sub-shapes has been changed:
  //! 0: at least one Replace or Remove -> COMPOUND, else as such
  //! 1: at least one Remove (Replace are ignored) -> COMPOUND
  //! 2: Replace and Remove are both ignored
  //! If Replace/Remove are ignored or absent, the result as same
  //! type as the starting shape
  Standard_EXPORT virtual   TopoDS_Shape Apply (const TopoDS_Shape& shape, const TopAbs_ShapeEnum until, const Standard_Integer buildmode) ;
  
  //! Applies the substitutions requests to a shape.
  //!
  //! <until> gives the level of type until which requests are taken
  //! into account. For subshapes of the type <until> no rebuild
  //! and futher exploring are done.
  //!
  //! NOTE: each subshape can be replaced by shape of the same type
  //! or by shape containing only shapes of that type (for
  //! example, TopoDS_Edge can be replaced by TopoDS_Edge,
  //! TopoDS_Wire or TopoDS_Compound containing TopoDS_Edges).
  //! If incompatible shape type is encountered, it is ignored
  //! and flag FAIL1 is set in Status.
  Standard_EXPORT virtual   TopoDS_Shape Apply (const TopoDS_Shape& shape, const TopAbs_ShapeEnum until = TopAbs_SHAPE) ;
  
  //! Returns a complete substitution status for a shape
  //! 0  : not recorded,   <newsh> = original <shape>
  //! < 0: to be removed,  <newsh> is NULL
  //! > 0: to be replaced, <newsh> is a new item
  //! If <last> is False, returns status and new shape recorded in
  //! the map directly for the shape, if True and status > 0 then
  //! recursively searches for the last status and new shape.
  Standard_EXPORT virtual   Standard_Integer Status (const TopoDS_Shape& shape, TopoDS_Shape& newsh, const Standard_Boolean last = Standard_False) ;
  
  //! Queries the status of last call to Apply(shape,enum)
  //! OK   : no (sub)shapes replaced or removed
  //! DONE1: source (starting) shape replaced
  //! DONE2: source (starting) shape removed
  //! DONE3: some subshapes replaced
  //! DONE4: some subshapes removed
  //! FAIL1: some replacements not done because of bad type of subshape
  Standard_EXPORT virtual   Standard_Boolean Status (const ShapeExtend_Status status)  const;




  DEFINE_STANDARD_RTTI(ShapeBuild_ReShape)

protected:




private: 




};







#endif // _ShapeBuild_ReShape_HeaderFile