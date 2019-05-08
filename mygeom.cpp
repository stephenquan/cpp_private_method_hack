#include "mygeom.h"

MyGeom::MyGeom(double w, double h) : Geom(w,h)
{
}

double MyGeom::area() const
{
    return _area();
}

