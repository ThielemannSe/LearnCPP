# Learning CPP!

This is a small course for learning C++.

## Overloading

## Operator overloading

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