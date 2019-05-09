#include <QCoreApplication>
#include <QDebug>
#include "MyGeom.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyGeom rect;
    rect.setW(3.0);
    rect.setH(4.0);

    qDebug() << Q_FUNC_INFO << rect.area();

    return a.exec();
}
