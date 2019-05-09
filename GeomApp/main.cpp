#include <QCoreApplication>
#include <QDebug>
#include "MyGeom.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyGeom rect;
    rect.setProperty("w", QVariant(3.0));
    rect.setProperty("h", QVariant(4.0));

    qDebug() << Q_FUNC_INFO << rect.area();

    return a.exec();
}
