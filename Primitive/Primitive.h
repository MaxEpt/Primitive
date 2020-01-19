#ifndef PRIMITIVE_H
#define PRIMITIVE_H

class Primitive
{

public:
    virtual double getArea() = 0;
    virtual void doIncrease() = 0;
    virtual void doMove() = 0;    
    virtual void printProps() = 0;

};

#endif