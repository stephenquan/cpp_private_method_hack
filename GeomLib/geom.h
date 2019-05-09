#ifndef GEOM_H
#define GEOM_H

class Geom
{
public:
    Geom(double w = 1.0, double h = 1.0);

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
