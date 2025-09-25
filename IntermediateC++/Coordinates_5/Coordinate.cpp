// CSC 24400
// This file now has a method definition for scale()
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// This method prints a coordinate out as (x, y).
// It takes no arguments.
// It returns nothing.
void Coordinate::printCoordMethod() const
{
    // NOTICE: We can access x and y (instance attrs)
    //    directly since this is a class method.
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// This method scales a coordinate by val
// It takes one int argument representing the amount to scale by.
// It returns a reference to the current object.
// val is passed by reference so we don't have to make a copy of it like with PBV
//    but it still shouldn't change, so we make it "const," too (PBCR)
Coordinate& Coordinate::scale(const int &val)
{
    x *= val;
    y *= val;

    // "this" is a pointer to the CURRENT OBJECT
    // "*this" is the de-referenced current object
    return *this;
}

// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument to print.
// It returns nothing.
// p is passed by reference so we don't have to make a copy of it like with PBV
//    but it still shouldn't change, so we make it "const," too (PBCR)
void printCoordFunction(const Coordinate &p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}
