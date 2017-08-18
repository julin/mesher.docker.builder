// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlXCAFDrivers_DocumentRetrievalDriver_HeaderFile
#define _XmlXCAFDrivers_DocumentRetrievalDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlXCAFDrivers_DocumentRetrievalDriver.hxx>

#include <XmlDrivers_DocumentRetrievalDriver.hxx>
#include <Handle_XmlMDF_ADriverTable.hxx>
#include <Handle_CDM_MessageDriver.hxx>
class XmlMDF_ADriverTable;
class CDM_MessageDriver;


//! retrieval driver of a XS document
class XmlXCAFDrivers_DocumentRetrievalDriver : public XmlDrivers_DocumentRetrievalDriver
{

public:

  
  Standard_EXPORT XmlXCAFDrivers_DocumentRetrievalDriver();
  
  Standard_EXPORT virtual   Handle(XmlMDF_ADriverTable) AttributeDrivers (const Handle(CDM_MessageDriver)& theMsgDriver) ;




  DEFINE_STANDARD_RTTI(XmlXCAFDrivers_DocumentRetrievalDriver)

protected:




private: 




};







#endif // _XmlXCAFDrivers_DocumentRetrievalDriver_HeaderFile