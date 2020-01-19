#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Primitive/Primitive.h"

class Circle: public Primitive
{

public:
    Circle();
    ~Circle() override;
    double getArea() override;
    void doResize(double factor, bool increase) override;
    void doMove(double dx, double dy) override;
    void printProps() override;

private:
    const double pi = 3.14;
    double m_centerX = 0;
    double m_centerY = 0;
    double m_radius = 0;

};

#endif