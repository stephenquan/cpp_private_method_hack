#ifndef __MyGeom_H__
#define __MyGeom_H__

// #include "../GeomLib/geom.h"
//
// The above #include yields the following errors:
//
// C:\GitHub\cpp_private_method_hack\GeomApp\MyGeom.cpp(11): error C2248: 'Geom::_area': cannot access private member declared in class 'Geom'
// c:\github\cpp_private_method_hack\geomapp\../GeomLib/geom.h(30): note: see declaration of 'Geom::_area'
// c:\github\cpp_private_method_hack\geomapp\../GeomLib/geom.h(6): note: see declaration of 'Geom'

// This is a workaround with the friend forced.

#include "Geom_friendly.h"

class MyGeom : public Geom
{
    Q_OBJECT

public:
    MyGeom(QObject* parent = nullptr);

    double area() const;

};

#endif
