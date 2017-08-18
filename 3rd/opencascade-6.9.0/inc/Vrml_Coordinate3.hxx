// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Vrml_Coordinate3_HeaderFile
#define _Vrml_Coordinate3_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Vrml_Coordinate3.hxx>

#include <Handle_TColgp_HArray1OfVec.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_OStream.hxx>
class TColgp_HArray1OfVec;


//! defines a Coordinate3 node of VRML specifying
//! properties of geometry and its appearance.
//! This node defines a set of 3D coordinates to be used by a subsequent IndexedFaceSet,
//! IndexedLineSet, or PointSet node. This node does not produce a visible result
//! during rendering; it simply replaces the current coordinates in the rendering
//! state for subsequent nodes to use.
class Vrml_Coordinate3 : public MMgt_TShared
{

public:

  
  Standard_EXPORT Vrml_Coordinate3(const Handle(TColgp_HArray1OfVec)& aPoint);
  
  Standard_EXPORT Vrml_Coordinate3();
  
  Standard_EXPORT   void SetPoint (const Handle(TColgp_HArray1OfVec)& aPoint) ;
  
  Standard_EXPORT   Handle(TColgp_HArray1OfVec) Point()  const;
  
  Standard_EXPORT   Standard_OStream& Print (Standard_OStream& anOStream)  const;




  DEFINE_STANDARD_RTTI(Vrml_Coordinate3)

protected:




private: 


  Handle(TColgp_HArray1OfVec) myPoint;


};







#endif // _Vrml_Coordinate3_HeaderFile