// CSC 24400
// This file now has a method definition for operator+()
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

// This method overloads the + operator to add two Coordinates
// It takes one Coordinate argument to add to the calling Coordinate object
// It returns a Coordinate object representing the sum of the
//    calling Coordinate and the Coordinate argument.
Coordinate Coordinate::operator+(const Coordinate &p2)
{
    Coordinate sum = Coordinate();
    sum.x = x + p2.x;
    sum.y = y + p2.y;
    return sum;
}

// !!! TRY IT YOURSELF !!!
//    1. Overload the + operator to add a Coordinate object and an integer
//    2. Test the second overloaded + in main()

// !!! TRY IT YOURSELF !!!
//    1. Overload the - operator to subtract a Coordinate point from the current Coordinate
//    2. Test the overloaded - in main()

// This function translates a Coordinate point
// It takes three arguments:
//    - One Coordinate point p, representing the Coordinate point to be translated
//    - One int xOffset, representing the amount to translate the x value by
//    - One int yOffset, representing the amount to translate the y value by
// It returns nothing.
// This function is a FRIEND so we can access (and modify) private attributes!
void translate(Coordinate &p, const int &xOffset, const int &yOffset)
{
  p.x += xOffset;
  p.y += yOffset;
  return;
}

// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument to print.
// It returns nothing.
// This function is NOT a friend so we have to use our get() methods to access
//    private attributes!
void printCoordFunction(const Coordinate &p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}
