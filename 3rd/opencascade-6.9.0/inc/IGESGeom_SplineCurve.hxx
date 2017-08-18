// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGeom_SplineCurve_HeaderFile
#define _IGESGeom_SplineCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGeom_SplineCurve.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Real.hxx>
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class Standard_DimensionMismatch;
class Standard_OutOfRange;


//! Defines IGESSplineCurve, Type <112> Form <0>
//! in package IGESGeom
//! The parametric spline is a sequence of parametric
//! polynomial segments. The curve could be of the type
//! Linear, Quadratic, Cubic, Wilson-Fowler, Modified
//! Wilson-Fowler, B-Spline. The N polynomial segments
//! are delimited by the break points  T(1), T(2), T(3),
//! ..., T(N+1).
class IGESGeom_SplineCurve : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGeom_SplineCurve();
  
  //! This method is used to set the fields of the class
  //! SplineCurve
  //! - aType           : Spline Type
  //! 1 = Linear
  //! 2 = Quadratic
  //! 3 = Cubic
  //! 4 = Wilson-Fowler
  //! 5 = Modified Wilson-Fowler
  //! 6 = B Spline
  //! - aDegree         : Degree of continuity w.r.t. arc length
  //! - nbDimensions    : Number of dimensions
  //! 2 = Planar
  //! 3 = Non-planar
  //! - allBreakPoints  : Array of break points
  //! - allXPolynomials : X coordinate polynomials of segments
  //! - allYPolynomials : Y coordinate polynomials of segments
  //! - allZPolynomials : Z coordinate polynomials of segments
  //! - allXValues      : Values of 1st, 2nd, 3rd derivatives of
  //! X polynomials at the terminate point
  //! and values of X at terminate point
  //! - allYValues      : Values of 1st, 2nd, 3rd derivatives of
  //! Y polynomials at the terminate point
  //! and values of Y at terminate point
  //! - allZvalues      : Values of 1st, 2nd, 3rd derivatives of
  //! Z polynomials at the terminate point
  //! and values of Z at terminate point
  //! raises exception if allXPolynomials, allYPolynomials
  //! & allZPolynomials are not of same size OR allXValues, allYValues
  //! & allZValues are not of size 4
  Standard_EXPORT   void Init (const Standard_Integer aType, const Standard_Integer aDegree, const Standard_Integer nbDimensions, const Handle(TColStd_HArray1OfReal)& allBreakPoints, const Handle(TColStd_HArray2OfReal)& allXPolynomials, const Handle(TColStd_HArray2OfReal)& allYPolynomials, const Handle(TColStd_HArray2OfReal)& allZPolynomials, const Handle(TColStd_HArray1OfReal)& allXvalues, const Handle(TColStd_HArray1OfReal)& allYvalues, const Handle(TColStd_HArray1OfReal)& allZvalues) ;
  
  //! returns the type of Spline curve
  Standard_EXPORT   Standard_Integer SplineType()  const;
  
  //! returns the degree of the curve
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  //! returns the number of dimensions
  //! 2 = Planar
  //! 3 = Non-planar
  Standard_EXPORT   Standard_Integer NbDimensions()  const;
  
  //! returns the number of segments
  Standard_EXPORT   Standard_Integer NbSegments()  const;
  
  //! returns breakpoint of piecewise polynomial
  //! raises exception if Index <= 0 or Index > NbSegments() + 1
  Standard_EXPORT   Standard_Real BreakPoint (const Standard_Integer Index)  const;
  
  //! returns X coordinate polynomial for segment referred to by Index
  //! raises exception if Index <= 0 or Index > NbSegments()
  Standard_EXPORT   void XCoordPolynomial (const Standard_Integer Index, Standard_Real& AX, Standard_Real& BX, Standard_Real& CX, Standard_Real& DX)  const;
  
  //! returns Y coordinate polynomial for segment referred to by Index
  //! raises exception if Index <= 0 or Index > NbSegments()
  Standard_EXPORT   void YCoordPolynomial (const Standard_Integer Index, Standard_Real& AY, Standard_Real& BY, Standard_Real& CY, Standard_Real& DY)  const;
  
  //! returns Z coordinate polynomial for segment referred to by Index
  //! raises exception if Index <= 0 or Index > NbSegments()
  Standard_EXPORT   void ZCoordPolynomial (const Standard_Integer Index, Standard_Real& AZ, Standard_Real& BZ, Standard_Real& CZ, Standard_Real& DZ)  const;
  
  //! returns the value of X polynomial, the values of 1st, 2nd and
  //! 3rd derivatives of the X polynomial at the terminate point
  Standard_EXPORT   void XValues (Standard_Real& TPX0, Standard_Real& TPX1, Standard_Real& TPX2, Standard_Real& TPX3)  const;
  
  //! returns the value of Y polynomial, the values of 1st, 2nd and
  //! 3rd derivatives of the Y polynomial at the termminate point
  Standard_EXPORT   void YValues (Standard_Real& TPY0, Standard_Real& TPY1, Standard_Real& TPY2, Standard_Real& TPY3)  const;
  
  //! returns the value of Z polynomial, the values of 1st, 2nd and
  //! 3rd derivatives of the Z polynomial at the termminate point
  Standard_EXPORT   void ZValues (Standard_Real& TPZ0, Standard_Real& TPZ1, Standard_Real& TPZ2, Standard_Real& TPZ3)  const;




  DEFINE_STANDARD_RTTI(IGESGeom_SplineCurve)

protected:




private: 


  Standard_Integer theType;
  Standard_Integer theDegree;
  Standard_Integer theNbDimensions;
  Handle(TColStd_HArray1OfReal) theBreakPoints;
  Handle(TColStd_HArray2OfReal) theXCoordsPolynomial;
  Handle(TColStd_HArray2OfReal) theYCoordsPolynomial;
  Handle(TColStd_HArray2OfReal) theZCoordsPolynomial;
  Handle(TColStd_HArray1OfReal) theXvalues;
  Handle(TColStd_HArray1OfReal) theYvalues;
  Handle(TColStd_HArray1OfReal) theZvalues;


};







#endif // _IGESGeom_SplineCurve_HeaderFile
