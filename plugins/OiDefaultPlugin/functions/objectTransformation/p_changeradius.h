#ifndef P_CHANGERADIUS_H
#define P_CHANGERADIUS_H

#include <QObject>
#include <QPointer>

#include "objecttransformation.h"
#include "oivec.h"
#include "oimat.h"

/*!
 * \brief The ChangeRadius class
 */
class ChangeRadius : public ObjectTransformation
{  
    Q_OBJECT

public:

    //##############################
    //function initialization method
    //##############################

    void init();

protected:

    //############
    //exec methods
    //############

    bool exec(Sphere &sphere);
    bool exec(Circle &circle);

private:

    //##############
    //helper methods
    //##############

    bool setUpResult(Sphere &sphere);
    bool setUpResult(Circle &circle);

};

#endif // P_CHANGERADIUS_H
