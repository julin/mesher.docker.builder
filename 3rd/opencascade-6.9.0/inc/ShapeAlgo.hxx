// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAlgo_HeaderFile
#define _ShapeAlgo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_ShapeAlgo_AlgoContainer.hxx>
class ShapeAlgo_AlgoContainer;
class ShapeAlgo_ToolContainer;
class ShapeAlgo_AlgoContainer;



class ShapeAlgo 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Provides initerface to the algorithms from Shape Healing.
  //! Creates and initializes default AlgoContainer.
  Standard_EXPORT static   void Init() ;
  
  //! Sets default AlgoContainer
  Standard_EXPORT static   void SetAlgoContainer (const Handle(ShapeAlgo_AlgoContainer)& aContainer) ;
  
  //! Returns default AlgoContainer
  Standard_EXPORT static   Handle(ShapeAlgo_AlgoContainer) AlgoContainer() ;




protected:





private:




friend class ShapeAlgo_ToolContainer;
friend class ShapeAlgo_AlgoContainer;

};







#endif // _ShapeAlgo_HeaderFile