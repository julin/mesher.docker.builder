// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_Edge_HeaderFile
#define _DBRep_Edge_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_DBRep_Edge.hxx>

#include <TopoDS_Edge.hxx>
#include <Draw_Color.hxx>
#include <MMgt_TShared.hxx>
class TopoDS_Edge;
class Draw_Color;


//! Display of an edge. Edge + color.
class DBRep_Edge : public MMgt_TShared
{

public:

  
  Standard_EXPORT DBRep_Edge(const TopoDS_Edge& E, const Draw_Color& C);
  
     const  TopoDS_Edge& Edge()  const;
  
      void Edge (const TopoDS_Edge& E) ;
  
     const  Draw_Color& Color()  const;
  
      void Color (const Draw_Color& C) ;




  DEFINE_STANDARD_RTTI(DBRep_Edge)

protected:




private: 


  TopoDS_Edge myEdge;
  Draw_Color myColor;


};


#include <DBRep_Edge.lxx>





#endif // _DBRep_Edge_HeaderFile
