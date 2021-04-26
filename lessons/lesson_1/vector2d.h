#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D
{
private:
    double x, y;

public:

    Vector2D();
    Vector2D(double x, double y);

    friend std::ostream& operator<< (std::ostream& os, const Vector2D& v);

    /* 
    Algebraic functions:

    - Addition of two vectors
    - Substraction of two vectors
    - Multiplikation of two vectors
    - Multiplication of vector with some number

    */

    Vector2D operator+ (const Vector2D& v);


    /*
        TODO:   add functions substraction and multiplication 
                of two vectors using operator overloading
    */

};

#endif