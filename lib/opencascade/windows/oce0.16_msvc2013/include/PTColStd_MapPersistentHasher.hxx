// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_MapPersistentHasher_HeaderFile
#define _PTColStd_MapPersistentHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_Persistent;



class PTColStd_MapPersistentHasher  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Standard_Integer HashCode(const Handle(Standard_Persistent)& K,const Standard_Integer Upper) ;
  
  Standard_EXPORT   static  Standard_Boolean IsEqual(const Handle(Standard_Persistent)& K1,const Handle(Standard_Persistent)& K2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif