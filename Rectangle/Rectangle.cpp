#include <iostream>
#include <ctime>
#include "Rectangle.h"

Rectangle::Rectangle()
{
    // std::cout << "Rectangle constructor called, getting random coordinates" << std::endl;    
       
    m_topLeftX = getRandom(min_random_value, max_random_value);
    m_topLeftY = getRandom(min_random_value, max_random_value);
       
    m_bottomRightX = getRandom(m_topLeftX, max_random_value);
    m_bottomRightY = getRandom(min_random_value, m_topLeftY);

    m_width = m_bottomRightX - m_topLeftX;
    m_height = m_topLeftY - m_bottomRightY;
    
}

Rectangle::~Rectangle()
{
    // std::cout << "Rectangle destructor called" << std::endl;
}

double Rectangle::getArea()
{
    return m_width * m_height;
}

void Rectangle::doResize(double factor, bool increase)
{
    if(increase)
    {
        m_topLeftX = m_topLeftX * factor;
        m_topLeftY = m_topLeftY * factor;

        m_bottomRightX = m_bottomRightX * factor;
        m_bottomRightY = m_bottomRightY * factor;

        m_width = m_width * factor;
        m_height = m_height * factor;
    }
    else
    {
        m_topLeftX = m_topLeftX / factor;
        m_topLeftY = m_topLeftY / factor;

        m_bottomRightX = m_bottomRightX / factor;
        m_bottomRightY = m_bottomRightY / factor;

        m_width = m_width / factor;
        m_height = m_height /factor;
    }
}

void Rectangle::doMove(double dx, double dy)
{
    m_topLeftX += dx;
    m_topLeftY += dy;

    m_bottomRightX += dx;
    m_bottomRightY += dy;
}

void Rectangle::printProps()
{
    std::cout << "Props of current rectangle are:" << std::endl;
    
    std::cout << "m_topLeftX=" << m_topLeftX << " m_topLeftY=" << m_topLeftY <<
                 " m_bottomRightX=" << m_bottomRightX << " m_bottomRightY=" << m_bottomRightY <<
                 " width=" << m_width << " height=" << m_height <<
                 std::endl;   
}