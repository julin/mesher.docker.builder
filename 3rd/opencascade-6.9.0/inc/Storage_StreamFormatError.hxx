// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Storage_StreamFormatError_HeaderFile
#define _Storage_StreamFormatError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_Failure.hxx>
#include <Handle_Storage_StreamFormatError.hxx>

#if !defined No_Exception && !defined No_Storage_StreamFormatError
  #define Storage_StreamFormatError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Storage_StreamFormatError::Raise(MESSAGE);
#else
  #define Storage_StreamFormatError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Storage_StreamFormatError, Standard_Failure)

#endif // _Storage_StreamFormatError_HeaderFile
