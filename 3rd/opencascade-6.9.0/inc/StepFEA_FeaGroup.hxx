// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaGroup_HeaderFile
#define _StepFEA_FeaGroup_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_FeaGroup.hxx>

#include <Handle_StepFEA_FeaModel.hxx>
#include <StepBasic_Group.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepFEA_FeaModel;
class TCollection_HAsciiString;


//! Representation of STEP entity FeaGroup
class StepFEA_FeaGroup : public StepBasic_Group
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_FeaGroup();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aGroup_Name, const Handle(TCollection_HAsciiString)& aGroup_Description, const Handle(StepFEA_FeaModel)& aModelRef) ;
  
  //! Returns field ModelRef
  Standard_EXPORT   Handle(StepFEA_FeaModel) ModelRef()  const;
  
  //! Set field ModelRef
  Standard_EXPORT   void SetModelRef (const Handle(StepFEA_FeaModel)& ModelRef) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaGroup)

protected:




private: 


  Handle(StepFEA_FeaModel) theModelRef;


};







#endif // _StepFEA_FeaGroup_HeaderFile