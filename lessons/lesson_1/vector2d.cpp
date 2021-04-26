#include <iostream>
#include "vector2d.h"

// Default constructor
Vector2D::Vector2D(): x(0), y(0) {};

// Constructor taking two doubles as arguments
Vector2D::Vector2D(double x, double y): x(x), y(y) {}; 

// Overloading << operator
std::ostream& operator<< (std::ostream& os, const Vector2D& v)
{
    os << "Vector( " << v.x << " " << v.y << " )";
    return os;
}


// Addition of two vectors using operator overlaoding 
Vector2D Vector2D::operator+ (const Vector2D& v)
{
    return Vector2D(this->x + v.x, this->y + v.y);   
}