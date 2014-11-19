// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColPGeom_FieldOfHArray1OfSurface_HeaderFile
#define _PColPGeom_FieldOfHArray1OfSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PGeom_Surface_HeaderFile
#include <Handle_PGeom_Surface.hxx>
#endif
#ifndef _Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfSurface_HeaderFile
#include <Handle_PColPGeom_VArrayNodeOfFieldOfHArray1OfSurface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PGeom_Surface;
class PColPGeom_VArrayNodeOfFieldOfHArray1OfSurface;
class PColPGeom_VArrayTNodeOfFieldOfHArray1OfSurface;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColPGeom_FieldOfHArray1OfSurface);


class PColPGeom_FieldOfHArray1OfSurface  : public DBC_BaseArray {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfSurface();
  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfSurface(const Standard_Integer Size);
  
  Standard_EXPORT   PColPGeom_FieldOfHArray1OfSurface(const PColPGeom_FieldOfHArray1OfSurface& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PColPGeom_FieldOfHArray1OfSurface& Other) ;
    void operator =(const PColPGeom_FieldOfHArray1OfSurface& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PGeom_Surface)& Value) ;
  
  Standard_EXPORT     Handle_PGeom_Surface& Value(const Standard_Integer Index) const;
    Handle_PGeom_Surface& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PColPGeom_FieldOfHArray1OfSurface()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif