#ifndef __MyGeom_H__
#define __MyGeom_H__

//#include "../GeomLib/geom.h"
#include "Geom_patched.h"

class MyGeom : public Geom
{
    Q_OBJECT

public:
    MyGeom(QObject* parent = nullptr);

    double area() const;

};

#endif
