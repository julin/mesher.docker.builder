// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToIGES_GeomVector_HeaderFile
#define _GeomToIGES_GeomVector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <GeomToIGES_GeomEntity.hxx>
#include <Handle_IGESGeom_Direction.hxx>
#include <Handle_Geom_Vector.hxx>
#include <Handle_Geom_VectorWithMagnitude.hxx>
#include <Handle_Geom_Direction.hxx>
class GeomToIGES_GeomEntity;
class IGESGeom_Direction;
class Geom_Vector;
class Geom_VectorWithMagnitude;
class Geom_Direction;


//! This class implements the transfer of the Vector from Geom
//! to IGES . These can be :
//! . Vector
//! * Direction
//! * VectorWithMagnitude
class GeomToIGES_GeomVector  : public GeomToIGES_GeomEntity
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToIGES_GeomVector();
  
  //! Creates a tool GeomVector ready to run and sets its
  //! fields as GE's.
  Standard_EXPORT GeomToIGES_GeomVector(const GeomToIGES_GeomEntity& GE);
  
  //! Transfert  a  GeometryEntity which  answer True  to  the
  //! member : BRepToIGES::IsGeomVector(Geometry).  If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESGeom_Direction) TransferVector (const Handle(Geom_Vector)& start) ;
  
  Standard_EXPORT   Handle(IGESGeom_Direction) TransferVector (const Handle(Geom_VectorWithMagnitude)& start) ;
  
  Standard_EXPORT   Handle(IGESGeom_Direction) TransferVector (const Handle(Geom_Direction)& start) ;




protected:





private:





};







#endif // _GeomToIGES_GeomVector_HeaderFile