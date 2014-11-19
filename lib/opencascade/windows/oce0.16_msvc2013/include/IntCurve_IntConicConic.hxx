// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurve_IntConicConic_HeaderFile
#define _IntCurve_IntConicConic_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntCurve_IntImpConicParConic_HeaderFile
#include <IntCurve_IntImpConicParConic.hxx>
#endif
#ifndef _IntRes2d_Intersection_HeaderFile
#include <IntRes2d_Intersection.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_ConstructionError;
class gp_Lin2d;
class IntRes2d_Domain;
class gp_Circ2d;
class gp_Elips2d;
class gp_Parab2d;
class gp_Hypr2d;


//! Provides methods to intersect two conics. <br>
//!          The exception ConstructionError is raised  in constructors <br>
//!          or in Perform methods  when a domain  (Domain from IntRes2d) <br>
//!          is not correct, i-e when a Circle (Circ2d from  gp) or <br>
//!          an Ellipse (i-e Elips2d from  gp) do not have a closed <br>
//!          domain (use the  SetEquivalentParameters method for a domain <br>
//!          on a circle or an ellipse). <br>
class IntCurve_IntConicConic  : public IntRes2d_Intersection {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty Constructor <br>
      IntCurve_IntConicConic();
  //! Intersection between 2 lines from gp. <br>
      IntCurve_IntConicConic(const gp_Lin2d& L1,const IntRes2d_Domain& D1,const gp_Lin2d& L2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between 2 lines from gp. <br>
  Standard_EXPORT     void Perform(const gp_Lin2d& L1,const IntRes2d_Domain& D1,const gp_Lin2d& L2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a line and a circle. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
      IntCurve_IntConicConic(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Circ2d& C,const IntRes2d_Domain& DC,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a line and a circle. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
  Standard_EXPORT     void Perform(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Circ2d& C,const IntRes2d_Domain& DC,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a line and an ellipse. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
      IntCurve_IntConicConic(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Elips2d& E,const IntRes2d_Domain& DE,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a line and an ellipse. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
  Standard_EXPORT     void Perform(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Elips2d& E,const IntRes2d_Domain& DE,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a line and a parabola from gp. <br>
      IntCurve_IntConicConic(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a line and a parabola from gp. <br>
  Standard_EXPORT     void Perform(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a line and an hyperbola. <br>
      IntCurve_IntConicConic(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a line and an hyperbola. <br>
  Standard_EXPORT     void Perform(const gp_Lin2d& L,const IntRes2d_Domain& DL,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between 2 circles from gp. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of one of the domain returns False. <br>
      IntCurve_IntConicConic(const gp_Circ2d& C1,const IntRes2d_Domain& D1,const gp_Circ2d& C2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between 2 circles from gp. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of one of the circle returns False. <br>
  Standard_EXPORT     void Perform(const gp_Circ2d& C1,const IntRes2d_Domain& D1,const gp_Circ2d& C2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a circle and an ellipse. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of one the domain returns False. <br>
      IntCurve_IntConicConic(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Elips2d& E,const IntRes2d_Domain& DE,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a circle and an ellipse. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of one the domain returns False. <br>
  Standard_EXPORT     void Perform(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Elips2d& E,const IntRes2d_Domain& DE,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a circle and a parabola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
      IntCurve_IntConicConic(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a circle and a parabola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
  Standard_EXPORT     void Perform(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a circle and an hyperbola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
      IntCurve_IntConicConic(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a circle and an hyperbola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the circle returns False. <br>
  Standard_EXPORT     void Perform(const gp_Circ2d& C,const IntRes2d_Domain& DC,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between 2 ellipses. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of one of the domain returns False. <br>
      IntCurve_IntConicConic(const gp_Elips2d& E1,const IntRes2d_Domain& D1,const gp_Elips2d& E2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between 2 ellipses. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of one of the domain returns False. <br>
  Standard_EXPORT     void Perform(const gp_Elips2d& E1,const IntRes2d_Domain& D1,const gp_Elips2d& E2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between an ellipse and a parabola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
      IntCurve_IntConicConic(const gp_Elips2d& E,const IntRes2d_Domain& DE,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between an ellipse and a parabola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
  Standard_EXPORT     void Perform(const gp_Elips2d& E,const IntRes2d_Domain& DE,const gp_Parab2d& P,const IntRes2d_Domain& DP,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between an ellipse and an hyperbola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
      IntCurve_IntConicConic(const gp_Elips2d& E,const IntRes2d_Domain& DE,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between an ellipse and an hyperbola. <br>
//!          The exception ConstructionError is raised if the method <br>
//!          IsClosed of the domain of the ellipse returns False. <br>
  Standard_EXPORT     void Perform(const gp_Elips2d& E,const IntRes2d_Domain& DE,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between 2 parabolas. <br>
      IntCurve_IntConicConic(const gp_Parab2d& P1,const IntRes2d_Domain& D1,const gp_Parab2d& P2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between 2 parabolas. <br>
  Standard_EXPORT     void Perform(const gp_Parab2d& P1,const IntRes2d_Domain& D1,const gp_Parab2d& P2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between a parabola and an hyperbola. <br>
      IntCurve_IntConicConic(const gp_Parab2d& P,const IntRes2d_Domain& DP,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between a parabola and an hyperbola. <br>
  Standard_EXPORT     void Perform(const gp_Parab2d& P,const IntRes2d_Domain& DP,const gp_Hypr2d& H,const IntRes2d_Domain& DH,const Standard_Real TolConf,const Standard_Real Tol) ;
  //! Intersection between 2 hyperbolas. <br>
      IntCurve_IntConicConic(const gp_Hypr2d& H1,const IntRes2d_Domain& D1,const gp_Hypr2d& H2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol);
  //! Intersection between 2 hyperbolas. <br>
  Standard_EXPORT     void Perform(const gp_Hypr2d& H1,const IntRes2d_Domain& D1,const gp_Hypr2d& H2,const IntRes2d_Domain& D2,const Standard_Real TolConf,const Standard_Real Tol) ;





protected:





private:



IntCurve_IntImpConicParConic Inter;


};


#include <IntCurve_IntConicConic.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif