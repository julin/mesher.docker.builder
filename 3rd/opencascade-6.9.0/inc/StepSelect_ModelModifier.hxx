// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepSelect_ModelModifier_HeaderFile
#define _StepSelect_ModelModifier_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepSelect_ModelModifier.hxx>

#include <IFSelect_Modifier.hxx>
#include <Handle_StepData_StepModel.hxx>
#include <Handle_StepData_Protocol.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Interface_InterfaceModel.hxx>
#include <Handle_Interface_Protocol.hxx>
class StepData_StepModel;
class StepData_Protocol;
class IFSelect_ContextModif;
class Interface_InterfaceModel;
class Interface_Protocol;
class Interface_CopyTool;



class StepSelect_ModelModifier : public IFSelect_Modifier
{

public:

  
  Standard_EXPORT   void Perform (IFSelect_ContextModif& ctx, const Handle(Interface_InterfaceModel)& target, const Handle(Interface_Protocol)& protocol, Interface_CopyTool& TC)  const;
  
  Standard_EXPORT virtual   void PerformProtocol (IFSelect_ContextModif& ctx, const Handle(StepData_StepModel)& target, const Handle(StepData_Protocol)& proto, Interface_CopyTool& TC)  const;
  
  Standard_EXPORT virtual   void Performing (IFSelect_ContextModif& ctx, const Handle(StepData_StepModel)& target, Interface_CopyTool& TC)  const = 0;




  DEFINE_STANDARD_RTTI(StepSelect_ModelModifier)

protected:

  
  Standard_EXPORT StepSelect_ModelModifier(const Standard_Boolean maychangegraph);



private: 




};







#endif // _StepSelect_ModelModifier_HeaderFile
