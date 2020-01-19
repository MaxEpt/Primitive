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


};

#endif