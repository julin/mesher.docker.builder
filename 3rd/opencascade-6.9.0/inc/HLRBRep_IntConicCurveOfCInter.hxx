// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_IntConicCurveOfCInter_HeaderFile
#define _HLRBRep_IntConicCurveOfCInter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <IntCurve_IntConicConic.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <IntRes2d_Intersection.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_ConstructionError;
class IntCurve_IConicTool;
class HLRBRep_CurveTool;
class HLRBRep_TheIntConicCurveOfCInter;
class gp_Lin2d;
class IntRes2d_Domain;
class gp_Circ2d;
class gp_Elips2d;
class gp_Parab2d;
class gp_Hypr2d;



class HLRBRep_IntConicCurveOfCInter  : public IntRes2d_Intersection
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter();
  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter(const gp_Lin2d& L, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter(const gp_Circ2d& C, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter(const gp_Elips2d& E, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter(const gp_Parab2d& Prb, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT HLRBRep_IntConicCurveOfCInter(const gp_Hypr2d& H, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol);
  
  Standard_EXPORT   void Perform (const gp_Lin2d& L, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const gp_Circ2d& C, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const gp_Elips2d& E, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const gp_Parab2d& Prb, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;
  
  Standard_EXPORT   void Perform (const gp_Hypr2d& H, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol) ;




protected:





private:

  
  Standard_EXPORT   void InternalPerform (const gp_Lin2d& Lin1, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;
  
  Standard_EXPORT   void InternalPerform (const gp_Circ2d& Circ1, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;
  
  Standard_EXPORT   void InternalPerform (const gp_Elips2d& Eli1, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;
  
  Standard_EXPORT   void InternalPerform (const gp_Parab2d& Prb1, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;
  
  Standard_EXPORT   void InternalPerform (const gp_Hypr2d& Hpr1, const IntRes2d_Domain& D1, const Standard_Address& PCurve, const IntRes2d_Domain& D2, const Standard_Real TolConf, const Standard_Real Tol, const Standard_Boolean Composite) ;


  Standard_Real param1inf;
  Standard_Real param1sup;
  Standard_Real param2inf;
  Standard_Real param2sup;
  IntCurve_IntConicConic intconiconi;
  HLRBRep_TheIntConicCurveOfCInter intconicurv;


};







#endif // _HLRBRep_IntConicCurveOfCInter_HeaderFile