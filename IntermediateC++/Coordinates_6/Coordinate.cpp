// CSC 24400
// This file now has a function definition for translate()
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// This method prints a coordinate out as (x, y).
// It takes no arguments.
// It returns nothing.
void Coordinate::printCoordMethod() const
{
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// This method scales a coordinate by val
// It takes one int argument representing the amount to scale by.
// It returns a reference to the current object.
Coordinate& Coordinate::scale(const int &val)
{
    x *= val;
    y *= val;

    // "this" is a pointer to the CURRENT OBJECT
    // "*this" is the de-referenced current object
    return *this;
}

// Friend function to translate a Coordinate point
// Not a class method so we don't scope it!
// But, as a friend function, we do have access to private attributes x and y
// It takes three arguments:
//    - One Coordinate point p, representing the Coordinate point to be translated
//    - One int xOffset, representing the amount to translate the x value by
//    - One int yOffset, representing the amount to translate the y value by
// It returns nothing.
void translate(Coordinate &p, const int &xOffset, const int &yOffset)
{
  p.x += xOffset;
  p.y += yOffset;
  return;
}

// !!! TRY IT YOURSELF !!!
//    1. Define translate() as a class method instead of a standalone function
//    2. Add the method header to the .hpp file
//    3. Call the new translate() method in main() to test it

// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument to print.
// It returns nothing.
void printCoordFunction(const Coordinate &p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}
