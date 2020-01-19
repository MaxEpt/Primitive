#include <iostream>
#include "Primitive/Primitive.h"
#include "Rectangle/Rectangle.h"
#include "Circle/Circle.h"

int main()
{
    Primitive * circle = new Circle;
    
    std::cout << circle->getArea() << std::endl;    

    circle->doResize(2, 1);
    circle->doMove(30, -5.65);
    
    circle->printProps();
    
    delete circle;

    system("pause");
    return 0;
}