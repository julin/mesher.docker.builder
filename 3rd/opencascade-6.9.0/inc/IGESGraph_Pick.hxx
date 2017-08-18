// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESGraph_Pick_HeaderFile
#define _IGESGraph_Pick_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESGraph_Pick.hxx>

#include <Standard_Integer.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Standard_Boolean.hxx>


//! defines IGESPick, Type <406> Form <21>
//! in package IGESGraph
//!
//! Attaches information that an entity may be picked
//! by whatever pick device is used in the receiving
//! system
class IGESGraph_Pick : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESGraph_Pick();
  
  //! This method is used to set the fields of the class Pick
  //! - nbProps     : Number of property values (NP = 1)
  //! - aPickStatus : Pick Flag
  Standard_EXPORT   void Init (const Standard_Integer nbProps, const Standard_Integer aPickStatus) ;
  
  //! returns the number of property values in <me>.
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns 0 if <me> is pickable(default),
  //! 1 if <me> is not pickable.
  Standard_EXPORT   Standard_Integer PickFlag()  const;
  
  //! returns True if thePick is 0.
  Standard_EXPORT   Standard_Boolean IsPickable()  const;




  DEFINE_STANDARD_RTTI(IGESGraph_Pick)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Standard_Integer thePick;


};







#endif // _IGESGraph_Pick_HeaderFile