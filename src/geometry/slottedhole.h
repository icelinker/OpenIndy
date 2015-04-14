#ifndef SLOTTEDHOLE_H
#define SLOTTEDHOLE_H

#include <QObject>
#include <QtXml>
#include <QtMath>

#include "geometry.h"
#include "position.h"
#include "radius.h"
#include "direction.h"

/*!
 * \brief The SlottedHole class
 * Defines an elongated bore with one radius
 */
class SlottedHole : public Geometry
{
    Q_OBJECT

public:
    SlottedHole(const bool &isNominal, QObject *parent = 0);
    SlottedHole(const bool &isNominal, const Position &center, const Direction &normal,
                const Radius &radius, const double &length, const Direction &holeAxis, QObject *parent = 0);
    SlottedHole(const bool &isNominal, const Position &circleCenterA, const Position &circleCenterB,
                const Direction &normal, const Radius &radius, QObject *parent = 0);

    SlottedHole(const SlottedHole &copy, QObject *parent = 0);

    SlottedHole &operator=(const SlottedHole &copy);

    ~SlottedHole();

    //########################################
    //order of unknown parameters (Qxx-matrix)
    //########################################

    enum SlottedHoleUnknowns{
        unknownCenterX,
        unknownCenterY,
        unknownCenterZ,
        unknownNormalI,
        unknownNormalJ,
        unknownNormalK,
        unknownRadius,
        unknownLength,
        unknownHoleAxisI,
        unknownHoleAxisJ,
        unknownHoleAxisK
    };

    //###################################################################
    //check wether this geometry has a direction, a position and a radius
    //###################################################################

    bool hasDirection() const;
    bool hasPosition() const;
    bool hasRadius() const;

    //##################################
    //get or set slotted hole parameters
    //##################################

    const Radius &getRadius() const;
    const Direction &getDirection() const;
    const Position &getPosition() const;

    const Position &getCircleCenterA() const;
    const Position &getCircleCenterB() const;
    const Direction &getHoleAxis() const;
    const double &getLength() const;

    void setSlottedHole(const Position &center, const Direction &normal, const Radius &radius, const double &length, const Direction &holeAxis);
    void setSlottedHole(const Position &circleCenterA, const Position &circleCenterB, const Direction &normal, const Radius &radius);

    //###########################
    //reexecute the function list
    //###########################

    void recalc();

    //#################
    //save and load XML
    //#################

    QDomElement toOpenIndyXML(QDomDocument &xmlDoc) const;
    bool fromOpenIndyXML(QDomElement &xmlElem);

private:

    //#######################
    //slotted hole attributes
    //#######################

    Position center; //center of the slotted hole
    Direction normal; //normal vector
    Radius radius; //radius of the outer circles
    double length; //length of the slotted hole (= distance of the circle centers + 2 * radius)
    Direction holeAxis; //vector pointing from one circle center to the other)

    Position circleCenterA; //center of one circle
    Position circleCenterB; //center of the other circle

    //bool saveSimulationData();

    //static MeasurementConfig defaultMeasurementConfig; //used as a default for this geometry type

};

#endif // SLOTTEDHOLE_H