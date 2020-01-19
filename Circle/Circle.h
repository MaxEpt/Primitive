#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Primitive/Primitive.h"

class Circle: public Primitive
{

public:
    Circle();
    ~Circle();
    double getArea() override;
    void doIncrease() override;
    void doMove() override;
    void printProps() override;

};

#endif