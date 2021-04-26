# Learning CPP!

This is a small course for learning C++.
For W.J. and L.Q. :)



## Lesson 1 - Operator overloading

C++ allows overloading operators. Operators are methods that are executed when a specific operator (e.g. +, -, *, ...) is used in code.
There are default methods for standard datatypes like int, double or string for example. When a operator shall be used
inside a custom class for instance to compare two objects of a class we have to provide a custom definition of the equal-operator. 
This technique of overwriting an existing function is called **overloading**. In this special case it is called **operator overloading**.

Defining an operator method works the same way as defining a normal function. Declaration starts with defining the return type of the
function. Next comes the name of the function. In case of operator methods the keyword **operator** followed by the operator sign constitutes
the name of the function.

Example: Overloading "+"-Operator

```cpp
double operator+(/* args */)
{
    // do something here...
}
```

### Task

1. Try to understand the following example
2. Extend the Vector2D object by adding methods for multiplication and substraction of two vectors

vector2d.h

```cpp
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

    Vector2D addition(const Vector2D& v);

    /*
        TODO:   add functions substraction and multiplication 
                of two vectors using operator overloading
    */

};

#endif
```

vector.cpp

```cpp
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
```

The code above can be downloaded here: https://github.com/ThielemannSe/LearnCPP/tree/master/lessons/lesson_1