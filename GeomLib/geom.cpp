#include "geom.h"

Geom::Geom(double w, double h) : m_w(1.0), m_h(1.0)
{
    setW(w);
    setH(h);
}

void Geom::setW(double w)
{
    m_w = w;
}

void Geom::setH(double h)
{
    m_h = h;
}

double Geom::_area() const
{
    return w() * h();
}
