#ifndef CYLINDER_H
#define CYLINDER_H

#include "geometry.h"

class Cylinder : public Geometry
{
    Q_OBJECT
public:
    Cylinder(bool isNominal, QObject *parent = 0);
    Cylinder(const Cylinder &copy);

    OiVec xyz;
    OiVec ijk;
    double radius;

    OiVec getXYZ() const;
    OiVec getIJK() const;

    void recalc();

    QDomElement toOpenIndyXML(QDomDocument &xmlDoc) const;
    bool fromOpenIndyXML(QDomElement &xmlElem);
    ElementDependencies fromOpenIndyXML(QXmlStreamReader& xml);

    bool saveSimulationData();

    //TODO implement cylinder
};

#endif // CYLINDER_H
