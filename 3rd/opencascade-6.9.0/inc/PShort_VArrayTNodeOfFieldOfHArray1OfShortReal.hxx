// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PShort_VArrayTNodeOfFieldOfHArray1OfShortReal_HeaderFile
#define _PShort_VArrayTNodeOfFieldOfHArray1OfShortReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_ShortReal.hxx>
#include <Handle_PShort_VArrayNodeOfFieldOfHArray1OfShortReal.hxx>
#include <Standard_Address.hxx>
class PShort_FieldOfHArray1OfShortReal;
class PShort_VArrayNodeOfFieldOfHArray1OfShortReal;



class PShort_VArrayTNodeOfFieldOfHArray1OfShortReal 
{
public:

  DEFINE_STANDARD_ALLOC

  
    PShort_VArrayTNodeOfFieldOfHArray1OfShortReal();
  
    PShort_VArrayTNodeOfFieldOfHArray1OfShortReal(const Standard_ShortReal& aValue);
  
      void SetValue (const Standard_ShortReal& aValue) ;
  
      Standard_Address Value()  const;




protected:





private:



  Standard_ShortReal myValue;


};

#define Item Standard_ShortReal
#define Item_hxx <Standard_ShortReal.hxx>
#define DBC_VArrayNode PShort_VArrayNodeOfFieldOfHArray1OfShortReal
#define DBC_VArrayNode_hxx <PShort_VArrayNodeOfFieldOfHArray1OfShortReal.hxx>
#define DBC_VArrayTNode PShort_VArrayTNodeOfFieldOfHArray1OfShortReal
#define DBC_VArrayTNode_hxx <PShort_VArrayTNodeOfFieldOfHArray1OfShortReal.hxx>
#define Handle_DBC_VArrayNode Handle_PShort_VArrayNodeOfFieldOfHArray1OfShortReal
#define DBC_VArrayNode_Type_() PShort_VArrayNodeOfFieldOfHArray1OfShortReal_Type_()
#define DBC_VArray PShort_FieldOfHArray1OfShortReal
#define DBC_VArray_hxx <PShort_FieldOfHArray1OfShortReal.hxx>

#include <DBC_VArrayTNode.lxx>

#undef Item
#undef Item_hxx
#undef DBC_VArrayNode
#undef DBC_VArrayNode_hxx
#undef DBC_VArrayTNode
#undef DBC_VArrayTNode_hxx
#undef Handle_DBC_VArrayNode
#undef DBC_VArrayNode_Type_
#undef DBC_VArray
#undef DBC_VArray_hxx




#endif // _PShort_VArrayTNodeOfFieldOfHArray1OfShortReal_HeaderFile
