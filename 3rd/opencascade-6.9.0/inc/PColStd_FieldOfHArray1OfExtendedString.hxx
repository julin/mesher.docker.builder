// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColStd_FieldOfHArray1OfExtendedString_HeaderFile
#define _PColStd_FieldOfHArray1OfExtendedString_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <DBC_BaseArray.hxx>
#include <Handle_PCollection_HExtendedString.hxx>
#include <Handle_PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_PrimitiveTypes.hxx>
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PCollection_HExtendedString;
class PColStd_VArrayNodeOfFieldOfHArray1OfExtendedString;
class PColStd_VArrayTNodeOfFieldOfHArray1OfExtendedString;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColStd_FieldOfHArray1OfExtendedString);


class PColStd_FieldOfHArray1OfExtendedString  : public DBC_BaseArray
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT PColStd_FieldOfHArray1OfExtendedString();
  
  Standard_EXPORT PColStd_FieldOfHArray1OfExtendedString(const Standard_Integer Size);
  
  Standard_EXPORT PColStd_FieldOfHArray1OfExtendedString(const PColStd_FieldOfHArray1OfExtendedString& Varray);
  
  Standard_EXPORT   void Resize (const Standard_Integer Size) ;
  
  Standard_EXPORT   void Assign (const PColStd_FieldOfHArray1OfExtendedString& Other) ;
  void operator = (const PColStd_FieldOfHArray1OfExtendedString& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PCollection_HExtendedString)& Value) ;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString)& Value (const Standard_Integer Index)  const;
  Handle(PCollection_HExtendedString)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void Destroy() ;
~PColStd_FieldOfHArray1OfExtendedString()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};







#endif // _PColStd_FieldOfHArray1OfExtendedString_HeaderFile
