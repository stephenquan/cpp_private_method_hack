#ifndef __Geom_H__
#define __Geom_H__

#include <QObject>

class Geom : public QObject
{
    friend class MyGeom;

    Q_OBJECT

    Q_PROPERTY(double w READ w WRITE setW NOTIFY wChanged)
    Q_PROPERTY(double h READ h WRITE setH NOTIFY hChanged)

public:
    Geom(QObject* parent = nullptr);

signals:
    void wChanged();
    void hChanged();

public:
    inline double w() const { return m_w; }
    inline double h() const { return m_h; }
    void setW(double w);
    void setH(double h);

private:
    double m_w;
    double m_h;

    double _area() const;

};

#endif // GEOM_H
