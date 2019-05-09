#include "MyGeom.h"
#include <QDebug>

MyGeom::MyGeom(QObject* parent) :
    Geom(parent)
{
}

double MyGeom::area() const
{
    return _area();
}
