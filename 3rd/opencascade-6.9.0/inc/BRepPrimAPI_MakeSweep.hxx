// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrimAPI_MakeSweep_HeaderFile
#define _BRepPrimAPI_MakeSweep_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepBuilderAPI_MakeShape.hxx>
class TopoDS_Shape;


//! The abstract class MakeSweep is
//! the root class of swept primitives.
//! Sweeps are objects you obtain by sweeping a profile along a path.
//! The profile can be any topology and the path is usually a curve or
//! a wire. The profile generates objects according to the following rules:
//! -      Vertices generate Edges
//! -      Edges generate Faces.
//! -      Wires generate Shells.
//! -      Faces generate Solids.
//! -      Shells generate Composite  Solids.
//! You are not allowed to sweep Solids and Composite Solids.
//! Two kinds of sweeps are implemented in the BRepPrimAPI package:
//! -      The linear sweep called a   Prism
//! -      The rotational sweep    called a Revol
//! Swept constructions along complex profiles such as BSpline curves
//! are also available in the BRepOffsetAPI package..
class BRepPrimAPI_MakeSweep  : public BRepBuilderAPI_MakeShape
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the  TopoDS  Shape of the bottom of the sweep.
  Standard_EXPORT virtual   TopoDS_Shape FirstShape()  = 0;
  
  //! Returns the TopoDS Shape of the top of the sweep.
  Standard_EXPORT virtual   TopoDS_Shape LastShape()  = 0;




protected:





private:





};







#endif // _BRepPrimAPI_MakeSweep_HeaderFile