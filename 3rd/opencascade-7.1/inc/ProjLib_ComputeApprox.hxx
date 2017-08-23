// Created on: 1993-09-07
// Created by: Bruno DUMORTIER
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _ProjLib_ComputeApprox_HeaderFile
#define _ProjLib_ComputeApprox_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Handle.hxx>

#include <Standard_Real.hxx>
class Geom2d_BSplineCurve;
class Geom2d_BezierCurve;
class Adaptor3d_HCurve;
class Adaptor3d_HSurface;


//! Approximate the  projection of  a 3d curve   on an
//! analytic surface and stores the result in Approx.
//! The result is a 2d curve.
class ProjLib_ComputeApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! <Tol>    is   the   tolerance   with  which    the
  //! approximation is performed.
  Standard_EXPORT ProjLib_ComputeApprox(const Handle(Adaptor3d_HCurve)& C, const Handle(Adaptor3d_HSurface)& S, const Standard_Real Tol);
  
  Standard_EXPORT Handle(Geom2d_BSplineCurve) BSpline() const;
  
  Standard_EXPORT Handle(Geom2d_BezierCurve) Bezier() const;
  
  //! returns the reached Tolerance.
  Standard_EXPORT Standard_Real Tolerance() const;




protected:





private:



  Standard_Real myTolerance;
  Handle(Geom2d_BSplineCurve) myBSpline;
  Handle(Geom2d_BezierCurve) myBezier;


};







#endif // _ProjLib_ComputeApprox_HeaderFile
