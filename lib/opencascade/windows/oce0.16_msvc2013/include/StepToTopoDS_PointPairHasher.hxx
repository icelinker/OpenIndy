// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToTopoDS_PointPairHasher_HeaderFile
#define _StepToTopoDS_PointPairHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StepToTopoDS_PointPair;



class StepToTopoDS_PointPairHasher  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a HasCode value  for  the  PointPair <br>
  Standard_EXPORT   static  Standard_Integer HashCode(const StepToTopoDS_PointPair& K,const Standard_Integer Upper) ;
  //! Returns True  when the two  PointPair are the same <br>
  Standard_EXPORT   static  Standard_Boolean IsEqual(const StepToTopoDS_PointPair& K1,const StepToTopoDS_PointPair& K2) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif