// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_SubfigureDef_HeaderFile
#define _IGESBasic_SubfigureDef_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESBasic_SubfigureDef.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Handle_IGESData_IGESEntity.hxx>
#include <Handle_Standard_Transient.hxx>
class TCollection_HAsciiString;
class IGESData_HArray1OfIGESEntity;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class Standard_Transient;


//! defines SubfigureDef, Type <308> Form <0>
//! in package IGESBasic
//! This Entity permits a single definition of a detail to
//! be utilized in multiple instances in the creation of
//! the whole picture
class IGESBasic_SubfigureDef : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESBasic_SubfigureDef();
  
  //! This method is used to set the fields of the class
  //! SubfigureDef
  //! - aDepth           : It indicates the amount of nesting
  //! - aName            : the subfigure name
  //! - allAssocEntities : the associated entities
  Standard_EXPORT   void Init (const Standard_Integer aDepth, const Handle(TCollection_HAsciiString)& aName, const Handle(IGESData_HArray1OfIGESEntity)& allAssocEntities) ;
  
  //! returns depth of the Subfigure
  //! if theDepth = 0 - No reference to any subfigure instance.
  Standard_EXPORT   Standard_Integer Depth()  const;
  
  //! returns the name of Subfigure
  Standard_EXPORT   Handle(TCollection_HAsciiString) Name()  const;
  
  //! returns number of entities. Is greater than or equal to zero.
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! returns the specific entity as indicated by Index
  //! raises exception if Index <= 0 or Index > NbEntities()
  Standard_EXPORT   Handle(IGESData_IGESEntity) AssociatedEntity (const Standard_Integer Index)  const;
  
  //! returns the specific entity as indicated by Index
  //! raises exception if Index <= 0 or Index > NbEntities()
  Standard_EXPORT   Handle(Standard_Transient) Value (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESBasic_SubfigureDef)

protected:




private: 


  Standard_Integer theDepth;
  Handle(TCollection_HAsciiString) theName;
  Handle(IGESData_HArray1OfIGESEntity) theAssocEntities;


};







#endif // _IGESBasic_SubfigureDef_HeaderFile
