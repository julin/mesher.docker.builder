// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_NameAssignment_HeaderFile
#define _StepBasic_NameAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_NameAssignment.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;


//! Representation of STEP entity NameAssignment
class StepBasic_NameAssignment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_NameAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aAssignedName) ;
  
  //! Returns field AssignedName
  Standard_EXPORT   Handle(TCollection_HAsciiString) AssignedName()  const;
  
  //! Set field AssignedName
  Standard_EXPORT   void SetAssignedName (const Handle(TCollection_HAsciiString)& AssignedName) ;




  DEFINE_STANDARD_RTTI(StepBasic_NameAssignment)

protected:




private: 


  Handle(TCollection_HAsciiString) theAssignedName;


};







#endif // _StepBasic_NameAssignment_HeaderFile
