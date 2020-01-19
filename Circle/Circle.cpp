#include <iostream>
#include "Circle.h"

Circle::Circle()
{
    //init by random
    std::cout << "Enter coordinates of center:" << std::endl;
    
    std::cout << "X=";
    std::cin >> m_centerX;
    
    std::cout << "Y=";
    std::cin >> m_centerY;

    std::cout << "Enter radius:" << std::endl;
    
    std::cout << "radius=";
    std::cin >> m_radius;
}

Circle::~Circle()
{
    // std::cout << "Circle destructor called" <<std::endl;
}

double Circle::getArea()
{
    return pi * m_radius * m_radius;
}

void Circle::doResize(double factor, bool increase)
{
    std::cout << "increasing" << std::endl;

    if(increase)
    {
        m_radius = m_radius * factor;
    }
    else
    {
        m_radius = m_radius / factor;
    }
}

void Circle::doMove(double dx, double dy)
{
    std::cout << "moving" << std::endl;
    
    m_centerX += dx;
    m_centerY += dy; 
}

void Circle::printProps()
{
    std::cout << "Props of current circle are:" << std::endl;
    std::cout << "X=" << m_centerX << " Y=" << m_centerY << " r=" << m_radius << std::endl;
    std::cout << "========================================" << std::endl;
}