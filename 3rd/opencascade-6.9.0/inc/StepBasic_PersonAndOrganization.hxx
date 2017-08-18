// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_PersonAndOrganization_HeaderFile
#define _StepBasic_PersonAndOrganization_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_PersonAndOrganization.hxx>

#include <Handle_StepBasic_Person.hxx>
#include <Handle_StepBasic_Organization.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_Person;
class StepBasic_Organization;



class StepBasic_PersonAndOrganization : public MMgt_TShared
{

public:

  
  //! Returns a PersonAndOrganization
  Standard_EXPORT StepBasic_PersonAndOrganization();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_Person)& aThePerson, const Handle(StepBasic_Organization)& aTheOrganization) ;
  
  Standard_EXPORT   void SetThePerson (const Handle(StepBasic_Person)& aThePerson) ;
  
  Standard_EXPORT   Handle(StepBasic_Person) ThePerson()  const;
  
  Standard_EXPORT   void SetTheOrganization (const Handle(StepBasic_Organization)& aTheOrganization) ;
  
  Standard_EXPORT   Handle(StepBasic_Organization) TheOrganization()  const;




  DEFINE_STANDARD_RTTI(StepBasic_PersonAndOrganization)

protected:




private: 


  Handle(StepBasic_Person) thePerson;
  Handle(StepBasic_Organization) theOrganization;


};







#endif // _StepBasic_PersonAndOrganization_HeaderFile
