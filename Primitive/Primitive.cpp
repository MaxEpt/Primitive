#include <iostream>
#include "Primitive.h"


Primitive::~Primitive()
{
    // std::cout<< "primitive desctructor called" << std::endl;
}

int Primitive::getRandom(int min, int max)
{    
    if(min > 0)
    {
        return  min + std::rand() % (max-min);
    }
    else
    {
        return min + std::rand() % (abs(min) + max);
    }
}