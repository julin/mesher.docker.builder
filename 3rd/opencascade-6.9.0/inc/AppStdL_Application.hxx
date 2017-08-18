// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppStdL_Application_HeaderFile
#define _AppStdL_Application_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AppStdL_Application.hxx>

#include <Handle_CDM_MessageDriver.hxx>
#include <TDocStd_Application.hxx>
#include <Standard_CString.hxx>
class CDM_MessageDriver;
class TColStd_SequenceOfExtendedString;



class AppStdL_Application : public TDocStd_Application
{

public:

  
  Standard_EXPORT AppStdL_Application();
  
  Standard_EXPORT virtual   Handle(CDM_MessageDriver) MessageDriver() ;
  
  //! returns supported format for application documents.
  Standard_EXPORT virtual   void Formats (TColStd_SequenceOfExtendedString& theFormats) ;
  
  //! returns   the file  name  which  contains  application
  //! resources
  Standard_EXPORT   Standard_CString ResourcesName() ;




  DEFINE_STANDARD_RTTI(AppStdL_Application)

protected:




private: 


  Handle(CDM_MessageDriver) myMessageDriver;


};







#endif // _AppStdL_Application_HeaderFile
