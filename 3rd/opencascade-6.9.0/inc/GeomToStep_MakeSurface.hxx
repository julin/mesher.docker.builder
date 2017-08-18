// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeSurface_HeaderFile
#define _GeomToStep_MakeSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepGeom_Surface.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_Surface.hxx>
class StepGeom_Surface;
class StdFail_NotDone;
class Geom_Surface;


//! This class implements the mapping between classes
//! Surface from Geom and the class Surface from StepGeom which
//! describes a Surface from prostep. As Surface is an abstract
//! Surface this class is an access to the sub-class required.
class GeomToStep_MakeSurface  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeSurface(const Handle(Geom_Surface)& C);
  
  Standard_EXPORT  const  Handle(StepGeom_Surface)& Value()  const;




protected:





private:



  Handle(StepGeom_Surface) theSurface;


};







#endif // _GeomToStep_MakeSurface_HeaderFile