// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_TransformError_HeaderFile
#define _Visual3d_TransformError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_OutOfRange.hxx>
#include <Handle_Visual3d_TransformError.hxx>

#if !defined No_Exception && !defined No_Visual3d_TransformError
  #define Visual3d_TransformError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Visual3d_TransformError::Raise(MESSAGE);
#else
  #define Visual3d_TransformError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Visual3d_TransformError, Standard_OutOfRange)

#endif // _Visual3d_TransformError_HeaderFile
