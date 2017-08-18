// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_Array1OfPOnCurv_HeaderFile
#define _Extrema_Array1OfPOnCurv_HeaderFile

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
class Extrema_POnCurv;



class Extrema_Array1OfPOnCurv 
{
public:

  DEFINE_STANDARD_ALLOC

  
    Extrema_Array1OfPOnCurv(const Standard_Integer Low, const Standard_Integer Up);
  
    Extrema_Array1OfPOnCurv(const Extrema_POnCurv& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Extrema_POnCurv& V) ;
  
      void Destroy() ;
~Extrema_Array1OfPOnCurv()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  Extrema_Array1OfPOnCurv& Assign (const Extrema_Array1OfPOnCurv& Other) ;
 const  Extrema_Array1OfPOnCurv& operator = (const Extrema_Array1OfPOnCurv& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Extrema_POnCurv& Value) ;
  
     const  Extrema_POnCurv& Value (const Standard_Integer Index)  const;
   const  Extrema_POnCurv& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Extrema_POnCurv& ChangeValue (const Standard_Integer Index) ;
    Extrema_POnCurv& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT Extrema_Array1OfPOnCurv(const Extrema_Array1OfPOnCurv& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Extrema_POnCurv
#define Array1Item_hxx <Extrema_POnCurv.hxx>
#define TCollection_Array1 Extrema_Array1OfPOnCurv
#define TCollection_Array1_hxx <Extrema_Array1OfPOnCurv.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _Extrema_Array1OfPOnCurv_HeaderFile
