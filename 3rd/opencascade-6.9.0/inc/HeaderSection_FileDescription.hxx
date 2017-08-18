// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HeaderSection_FileDescription_HeaderFile
#define _HeaderSection_FileDescription_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HeaderSection_FileDescription.hxx>

#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Interface_HArray1OfHAsciiString;
class TCollection_HAsciiString;



class HeaderSection_FileDescription : public MMgt_TShared
{

public:

  
  //! Returns a FileDescription
  Standard_EXPORT HeaderSection_FileDescription();
  
  Standard_EXPORT   void Init (const Handle(Interface_HArray1OfHAsciiString)& aDescription, const Handle(TCollection_HAsciiString)& aImplementationLevel) ;
  
  Standard_EXPORT   void SetDescription (const Handle(Interface_HArray1OfHAsciiString)& aDescription) ;
  
  Standard_EXPORT   Handle(Interface_HArray1OfHAsciiString) Description()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) DescriptionValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbDescription()  const;
  
  Standard_EXPORT   void SetImplementationLevel (const Handle(TCollection_HAsciiString)& aImplementationLevel) ;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) ImplementationLevel()  const;




  DEFINE_STANDARD_RTTI(HeaderSection_FileDescription)

protected:




private: 


  Handle(Interface_HArray1OfHAsciiString) description;
  Handle(TCollection_HAsciiString) implementationLevel;


};







#endif // _HeaderSection_FileDescription_HeaderFile
