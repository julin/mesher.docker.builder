// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_KindOfInteractive_HeaderFile
#define _AIS_KindOfInteractive_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Declares the type of Interactive Object.
//! This is one of the following:
//! -   the Datum
//! -   the Object
//! -   the Relation
//! -   the Dimension
//! -   the None type.
//! The Datum is the construction element. These include
//! points, lines, axes and planes. The object brings
//! together topological shapes. The Relation includes
//! dimensions and constraints. The Dimension includes
//! length, radius, diameter and angle dimensions.
//! When the object is of an unknown type, the None
//! type is declared.
enum AIS_KindOfInteractive
{
AIS_KOI_None,
AIS_KOI_Datum,
AIS_KOI_Shape,
AIS_KOI_Object,
AIS_KOI_Relation,
AIS_KOI_Dimension
};

#endif // _AIS_KindOfInteractive_HeaderFile