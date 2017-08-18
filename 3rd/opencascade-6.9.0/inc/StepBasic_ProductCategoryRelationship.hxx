// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ProductCategoryRelationship_HeaderFile
#define _StepBasic_ProductCategoryRelationship_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ProductCategoryRelationship.hxx>

#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_ProductCategory.hxx>
#include <Standard_Boolean.hxx>
#include <MMgt_TShared.hxx>
class TCollection_HAsciiString;
class StepBasic_ProductCategory;


//! Representation of STEP entity ProductCategoryRelationship
class StepBasic_ProductCategoryRelationship : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ProductCategoryRelationship();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Standard_Boolean hasDescription, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepBasic_ProductCategory)& aCategory, const Handle(StepBasic_ProductCategory)& aSubCategory) ;
  
  //! Returns field Name
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! Set field Name
  Standard_EXPORT   void SetName (const Handle(TCollection_HAsciiString)& Name) ;
  
  //! Returns field Description
  Standard_EXPORT   Handle(TCollection_HAsciiString) Description()  const;
  
  //! Set field Description
  Standard_EXPORT   void SetDescription (const Handle(TCollection_HAsciiString)& Description) ;
  
  //! Returns True if optional field Description is defined
  Standard_EXPORT   Standard_Boolean HasDescription()  const;
  
  //! Returns field Category
  Standard_EXPORT   Handle(StepBasic_ProductCategory) Category()  const;
  
  //! Set field Category
  Standard_EXPORT   void SetCategory (const Handle(StepBasic_ProductCategory)& Category) ;
  
  //! Returns field SubCategory
  Standard_EXPORT   Handle(StepBasic_ProductCategory) SubCategory()  const;
  
  //! Set field SubCategory
  Standard_EXPORT   void SetSubCategory (const Handle(StepBasic_ProductCategory)& SubCategory) ;




  DEFINE_STANDARD_RTTI(StepBasic_ProductCategoryRelationship)

protected:




private: 


  Handle(TCollection_HAsciiString) theName;
  Handle(TCollection_HAsciiString) theDescription;
  Handle(StepBasic_ProductCategory) theCategory;
  Handle(StepBasic_ProductCategory) theSubCategory;
  Standard_Boolean defDescription;


};







#endif // _StepBasic_ProductCategoryRelationship_HeaderFile
