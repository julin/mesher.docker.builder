// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Array1OfVector_HeaderFile
#define _Graphic3d_Array1OfVector_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Graphic3d_Vector;



class Graphic3d_Array1OfVector 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Graphic3d_Array1OfVector(const Standard_Integer Low, const Standard_Integer Up);
  
    Graphic3d_Array1OfVector(const Graphic3d_Vector& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Graphic3d_Vector& V) ;
  
      void Destroy() ;
~Graphic3d_Array1OfVector()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Graphic3d_Array1OfVector& Assign (const Graphic3d_Array1OfVector& Other) ;
 const  Graphic3d_Array1OfVector& operator = (const Graphic3d_Array1OfVector& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Graphic3d_Vector& Value) ;
  
     const  Graphic3d_Vector& Value (const Standard_Integer Index)  const;
   const  Graphic3d_Vector& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Graphic3d_Vector& ChangeValue (const Standard_Integer Index) ;
    Graphic3d_Vector& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Graphic3d_Array1OfVector(const Graphic3d_Array1OfVector& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Graphic3d_Vector
#define Array1Item_hxx <Graphic3d_Vector.hxx>
#define TCollection_Array1 Graphic3d_Array1OfVector
#define TCollection_Array1_hxx <Graphic3d_Array1OfVector.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Graphic3d_Array1OfVector_HeaderFile