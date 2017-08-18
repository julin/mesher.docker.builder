// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_TriangleData_HeaderFile
#define _HLRAlgo_TriangleData_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>


//! Data structure of a triangle.
class HLRAlgo_TriangleData 
{
public:

  DEFINE_STANDARD_ALLOC

  
    HLRAlgo_TriangleData();
  
      Standard_Address Indices()  const;




protected:





private:



  Standard_Integer myIndices[4];


};


#include <HLRAlgo_TriangleData.lxx>





#endif // _HLRAlgo_TriangleData_HeaderFile