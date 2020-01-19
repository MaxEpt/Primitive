#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../Primitive/Primitive.h"

class Rectangle: public Primitive
{

public:
    Rectangle();
    ~Rectangle() override;
    double getArea() override;    
    void doResize(double factor, bool increase) override;
    void doMove(double dx, double dy) override;
    void printProps() override;

private:
    double m_width = 0;
    double m_height = 0;

    double m_topLeftX = 0;
    double m_topLeftY = 0;
    double m_topRighttX = 0;
    double m_topRightY = 0;

    double m_bottomLeftX = 0;
    double m_bottomLeftY = 0;
    double m_bottomRightX = 0;
    double m_bottomRightY = 0;


};

#endif