#include <QCoreApplication>
#include <QDebug>

#define private friend class MyGeom; private
#include "../GeomLib/geom.h"
#undef private

class MyGeom : public Geom
{
public:
    MyGeom(double w = 1.0, double h = 1.0);

    double area() const;

};

MyGeom::MyGeom(double w, double h) : Geom(w,h)
{
}

double MyGeom::area() const
{
    return _area();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyGeom rect(3.0, 4.0);

    qDebug() << Q_FUNC_INFO << rect.area();

    return a.exec();
}
