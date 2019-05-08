#ifndef MyGeom_H
#define MyGeom_H

#define private friend class MyGeom; private
#include "geom.h"
#undef private

class MyGeom : public Geom
{
public:
    MyGeom(double w = 1.0, double h = 1.0);

    double area() const;

};

#endif
