#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle()
{
    std::cout << "Rectangle constructor called" << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle destructor called" << std::endl;
}

double Rectangle::getArea()
{
    return 0;
}

void Rectangle::doResize(double factor, bool increase)
{
    std::cout << "increasing" << std::endl;
}

void Rectangle::doMove(double dx, double dy)
{
    std::cout << "moving" << std::endl;
}

void Rectangle::printProps()
{
    std::cout << "Props of current rectangle are:" << std::endl;
}