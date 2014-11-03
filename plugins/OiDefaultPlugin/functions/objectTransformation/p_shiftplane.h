#ifndef P_SHIFTPLANE_H
#define P_SHIFTPLANE_H

#include <QList>
#include <QString>
#include "function.h"
#include "pi_objecttransformation.h"
#include "pluginmetadata.h"
#include "plane.h"
#include "configuration.h"

class ShiftPlane : public ObjectTransformation
{
public:
    PluginMetaData* getMetaData() const;
    QList<InputParams> getNeededElements() const;
    QList<Configuration::FeatureTypes> applicableFor() const;
    QMap<QString, double> getDoubleParameter() const;
    bool exec(Plane&);

private:

};

#endif // P_SHIFTPLANE_H
