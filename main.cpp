#include <iostream>
#include <string>
#include <ctime>
#include "Primitive/Primitive.h"
#include "Rectangle/Rectangle.h"
#include "Circle/Circle.h"

int main()
{

    const int PRIMITIVES_CNT = 20;        
    Primitive* aPrimitives[PRIMITIVES_CNT];

    std::srand(std::time(0));

    // Creating primitives
    for(int i=0; i<PRIMITIVES_CNT; i++)
    {
        if(i < PRIMITIVES_CNT/2)
        {
            aPrimitives[i] = new Circle(i+1);
        }
        else
        {
            aPrimitives[i] = new Rectangle;
        }                
    }
    
    
    for(int i=0; i<PRIMITIVES_CNT; i++)
    {
        std::cout << "AREA=" << aPrimitives[i]->getArea() << std::endl;
        aPrimitives[i]->printProps();

        std::cout << std::endl;

        aPrimitives[i]->doResize(2, 1);
        aPrimitives[i]->doMove(10, 20);
        
        std::cout << "AREA=" << aPrimitives[i]->getArea() << std::endl;
        
        aPrimitives[i]->printProps();
        
        std::cout << "=============================================================================================" << std::endl;
    }
    
    
    // FREE MEMORY
    for(int i=0; i<PRIMITIVES_CNT; i++)
    {
        delete aPrimitives[i];
    }

    system("pause");
    return 0;
}