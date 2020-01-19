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
    int getRandom(int min, int max);

    const int max_random_value = 100;
    const int min_random_value = -100;

};

#endif