// CSC 24400
// This file now has a method definition for operator<<() and operator>>()
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

// This function translates a Coordinate point
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

// This function overloads << so we can cout a Coordinate
// It takes two arguments:
//    - One output stream os, representing where to send the output (e.g. cout)
//    - One Coordinate c, representing the Coordinate to be printed
// It returns a REFERENCE TO the output stream.
// Op<< provides an alternative to calling "coord.printCoordMethod()"
//    because "cout << coord" looks better and is more consistent
//    with other code that we write.
// Notice that the definition looks very similar. Some differences:
//    * Must use calling object c to access x and y because it's not a class method
//    * Must return the output stream
//    * Different args
ostream& operator<<(ostream &os, const Coordinate &c)
{
    cout << "(" << c.x << ", " << c.y << ")" << endl;
    return os;
}

// This function overloads >> so we can cin a Coordinate
// It takes two arguments:
//    - One input stream is, representing where to get the input from (e.g. cin)
//    - One Coordinate c, representing the Coordinate to be inputted
// It returns a REFERENCE TO the input stream.
istream& operator>>(istream &is, Coordinate &c)
{
    is >> c.x >> c.y;
    return is;
}

// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument to print.
// It returns nothing.
void printCoordFunction(const Coordinate &p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}
