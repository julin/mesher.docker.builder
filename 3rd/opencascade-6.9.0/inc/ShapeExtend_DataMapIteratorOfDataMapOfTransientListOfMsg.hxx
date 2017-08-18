// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg_HeaderFile
#define _ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg.hxx>
class Standard_NoSuchObject;
class Standard_Transient;
class Message_ListOfMsg;
class TColStd_MapTransientHasher;
class ShapeExtend_DataMapOfTransientListOfMsg;
class ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg;



class ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg();
  
  Standard_EXPORT ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg(const ShapeExtend_DataMapOfTransientListOfMsg& aMap);
  
  Standard_EXPORT   void Initialize (const ShapeExtend_DataMapOfTransientListOfMsg& aMap) ;
  
  Standard_EXPORT  const  Handle(Standard_Transient)& Key()  const;
  
  Standard_EXPORT  const  Message_ListOfMsg& Value()  const;




protected:





private:





};







#endif // _ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg_HeaderFile