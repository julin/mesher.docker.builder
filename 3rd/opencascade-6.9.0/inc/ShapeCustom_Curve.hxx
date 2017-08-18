// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_Curve_HeaderFile
#define _ShapeCustom_Curve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_Curve.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
class Geom_Curve;


//! Converts BSpline curve to periodic
class ShapeCustom_Curve 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeCustom_Curve();
  
  Standard_EXPORT ShapeCustom_Curve(const Handle(Geom_Curve)& C);
  
  Standard_EXPORT   void Init (const Handle(Geom_Curve)& C) ;
  
  //! Tries to convert the Curve to the Periodic form
  //! Returns the resulting curve
  //! Works only if the Curve is BSpline and is closed with
  //! Precision::Confusion()
  //! Else, or in case of failure, returns a Null Handle
  Standard_EXPORT   Handle(Geom_Curve) ConvertToPeriodic (const Standard_Boolean substitute, const Standard_Real preci = -1) ;




protected:





private:



  Handle(Geom_Curve) myCurve;


};







#endif // _ShapeCustom_Curve_HeaderFile
