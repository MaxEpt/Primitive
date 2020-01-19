#include <iostream>
#include <string>
#include <ctime>
#include "Primitive/Primitive.h"
#include "Rectangle/Rectangle.h"
#include "Circle/Circle.h"

int main()
{

    const int CNT = 3;
    
    Primitive* aPrimitives[CNT];

    std::srand(std::time(0));
    
    for(int i=0; i<CNT; i++)
    {
        aPrimitives[i] = new Rectangle;
    }
    
    
    for(int i=0; i<CNT; i++)
    {
        std::cout << "AREA=" << aPrimitives[i]->getArea() << std::endl;
        aPrimitives[i]->printProps();

        aPrimitives[i]->doResize(4, 1);
        std::cout << "AGAIN AREA=" << aPrimitives[i]->getArea() << std::endl;
        aPrimitives[i]->printProps();

    }
    
    
    // FREE MEMORY
    for(int i=0; i<CNT; i++)
    {
        delete aPrimitives[i];
    }

    system("pause");
    return 0;
}