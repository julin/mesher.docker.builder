// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_DataMapOfShapePnt_HeaderFile
#define _LocOpe_DataMapOfShapePnt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_LocOpe_DataMapNodeOfDataMapOfShapePnt.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class gp_Pnt;
class TopTools_ShapeMapHasher;
class LocOpe_DataMapNodeOfDataMapOfShapePnt;
class LocOpe_DataMapIteratorOfDataMapOfShapePnt;



class LocOpe_DataMapOfShapePnt  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_DataMapOfShapePnt(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   LocOpe_DataMapOfShapePnt& Assign (const LocOpe_DataMapOfShapePnt& Other) ;
  LocOpe_DataMapOfShapePnt& operator = (const LocOpe_DataMapOfShapePnt& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~LocOpe_DataMapOfShapePnt()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const gp_Pnt& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  gp_Pnt& Find (const TopoDS_Shape& K)  const;
 const  gp_Pnt& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   gp_Pnt& ChangeFind (const TopoDS_Shape& K) ;
  gp_Pnt& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT LocOpe_DataMapOfShapePnt(const LocOpe_DataMapOfShapePnt& Other);




};







#endif // _LocOpe_DataMapOfShapePnt_HeaderFile