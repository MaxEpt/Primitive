#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../Primitive/Primitive.h"

class Rectangle: public Primitive
{

public:
    Rectangle();
    ~Rectangle();
    double getArea() override;
    void doIncrease() override;
    void doMove() override;
    void printProps() override;


};

#endif