#include "geom.h"
#include <QDebug>

Geom::Geom(QObject* parent) :
    QObject(parent),
    m_w(1.0),
    m_h(1.0)
{
    qDebug() << Q_FUNC_INFO;
}

void Geom::setW(double w)
{
    qDebug() << Q_FUNC_INFO << w;
    m_w = w;
    emit wChanged();
}

void Geom::setH(double h)
{
    qDebug() << Q_FUNC_INFO << h;
    m_h = h;
    emit hChanged();
}

double Geom::_area() const
{
    qDebug() << Q_FUNC_INFO;
    return w() * h();
}
