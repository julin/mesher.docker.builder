// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfIntegerShape_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfIntegerShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopTools_DataMapNodeOfDataMapOfIntegerShape.hxx>
class Standard_NoSuchObject;
class TopoDS_Shape;
class TColStd_MapIntegerHasher;
class TopTools_DataMapOfIntegerShape;
class TopTools_DataMapNodeOfDataMapOfIntegerShape;



class TopTools_DataMapIteratorOfDataMapOfIntegerShape  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfIntegerShape();
  
  Standard_EXPORT TopTools_DataMapIteratorOfDataMapOfIntegerShape(const TopTools_DataMapOfIntegerShape& aMap);
  
  Standard_EXPORT   void Initialize (const TopTools_DataMapOfIntegerShape& aMap) ;
  
  Standard_EXPORT  const  Standard_Integer& Key()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Value()  const;




protected:





private:





};







#endif // _TopTools_DataMapIteratorOfDataMapOfIntegerShape_HeaderFile
