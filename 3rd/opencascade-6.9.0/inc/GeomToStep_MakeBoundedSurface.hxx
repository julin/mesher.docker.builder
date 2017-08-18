// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeBoundedSurface_HeaderFile
#define _GeomToStep_MakeBoundedSurface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepGeom_BoundedSurface.hxx>
#include <GeomToStep_Root.hxx>
#include <Handle_Geom_BoundedSurface.hxx>
class StepGeom_BoundedSurface;
class StdFail_NotDone;
class Geom_BoundedSurface;


//! This class implements the mapping between classes
//! BoundedSurface from Geom and the class BoundedSurface from
//! StepGeom which describes a BoundedSurface from prostep.
//! As BoundedSurface is an abstract BoundedSurface this class
//! is an access to the sub-class required.
class GeomToStep_MakeBoundedSurface  : public GeomToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToStep_MakeBoundedSurface(const Handle(Geom_BoundedSurface)& C);
  
  Standard_EXPORT  const  Handle(StepGeom_BoundedSurface)& Value()  const;




protected:





private:



  Handle(StepGeom_BoundedSurface) theBoundedSurface;


};







#endif // _GeomToStep_MakeBoundedSurface_HeaderFile