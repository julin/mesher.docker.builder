// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_RealList_HeaderFile
#define _TDataStd_RealList_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TDataStd_RealList.hxx>

#include <TColStd_ListOfReal.hxx>
#include <TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
#include <Standard_OStream.hxx>
class Standard_GUID;
class TDF_Label;
class TColStd_ListOfReal;
class TDF_Attribute;
class TDF_RelocationTable;


//! Contains a list of doubles.
class TDataStd_RealList : public TDF_Attribute
{

public:

  
  //! Static methods
  //! ==============
  //! Returns the ID of the list of doubles attribute.
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  //! Finds or creates a list of double values attribute.
  Standard_EXPORT static   Handle(TDataStd_RealList) Set (const TDF_Label& label) ;
  
  Standard_EXPORT TDataStd_RealList();
  
  Standard_EXPORT   Standard_Boolean IsEmpty()  const;
  
  Standard_EXPORT   Standard_Integer Extent()  const;
  
  Standard_EXPORT   void Prepend (const Standard_Real value) ;
  
  Standard_EXPORT   void Append (const Standard_Real value) ;
  
  //! Inserts the <value> before the first meet of <before_value>.
  Standard_EXPORT   Standard_Boolean InsertBefore (const Standard_Real value, const Standard_Real before_value) ;
  
  //! Inserts the <value> after the first meet of <after_value>.
  Standard_EXPORT   Standard_Boolean InsertAfter (const Standard_Real value, const Standard_Real after_value) ;
  
  //! Removes the first meet of the <value>.
  Standard_EXPORT   Standard_Boolean Remove (const Standard_Real value) ;
  
  Standard_EXPORT   void Clear() ;
  
  Standard_EXPORT   Standard_Real First()  const;
  
  Standard_EXPORT   Standard_Real Last()  const;
  
  Standard_EXPORT  const  TColStd_ListOfReal& List()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;
  
  Standard_EXPORT virtual   Standard_OStream& Dump (Standard_OStream& anOS)  const;




  DEFINE_STANDARD_RTTI(TDataStd_RealList)

protected:




private: 


  TColStd_ListOfReal myList;


};







#endif // _TDataStd_RealList_HeaderFile
