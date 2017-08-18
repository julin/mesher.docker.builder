// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_DefSwitch_HeaderFile
#define _IGESData_DefSwitch_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Storable.hxx>
#include <IGESData_DefType.hxx>
#include <Standard_PrimitiveTypes.hxx>


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(IGESData_DefSwitch);

//! description of a directory componant which can be either
//! undefined (let Void), defined as a Reference to an entity,
//! or as a Rank, integer value adressing a builtin table
//! The entity reference is not included here, only reference
//! status is kept (because entity type must be adapted)
class IGESData_DefSwitch 
{

public:

  DEFINE_STANDARD_ALLOC

  
  //! creates a DefSwitch as Void
  Standard_EXPORT IGESData_DefSwitch();
  
  //! sets DefSwitch to "Void" status (in file : Integer = 0)
  Standard_EXPORT   void SetVoid() ;
  
  //! sets DefSwitch to "Reference" Status (in file : Integer < 0)
  Standard_EXPORT   void SetReference() ;
  
  //! sets DefSwitch to "Rank" with a Value (in file : Integer > 0)
  Standard_EXPORT   void SetRank (const Standard_Integer val) ;
  
  //! returns DefType status (Void,Reference,Rank)
  Standard_EXPORT   IGESData_DefType DefType()  const;
  
  //! returns Value as Integer (sensefull for a Rank)
  Standard_EXPORT   Standard_Integer Value()  const;
    Standard_Integer _CSFDB_GetIGESData_DefSwitchtheval() const { return theval; }
    void _CSFDB_SetIGESData_DefSwitchtheval(const Standard_Integer p) { theval = p; }



protected:




private: 


  Standard_Integer theval;


};







#endif // _IGESData_DefSwitch_HeaderFile