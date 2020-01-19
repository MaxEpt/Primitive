#ifndef PRIMITIVE_H
#define PRIMITIVE_H

class Primitive
{

public:
    virtual ~Primitive() = 0;
    virtual double getArea() = 0;
    
    virtual void doResize(double coeff, bool increase) = 0;
    virtual void doMove(double dx, double dy) = 0;    
    virtual void printProps() = 0;

};

#endif