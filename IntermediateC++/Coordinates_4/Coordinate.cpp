// CSC 24400
// This file now has a method definition for printCoordMethod() and a function
//    definition for printCoordFunction()
#include "Coordinate.hpp"

#include <iostream>
using namespace std;

// CLASS METHOD EXAMPLE FOR PRINTING (x, y)
// This method prints a coordinate out as (x, y).
// It takes no arguments.
// It returns nothing.
// NOTICE: We must scope this method to the
//    Coordinate class!
void Coordinate::printCoordMethod()
{
    // NOTICE: We can access x and y (instance attrs)
    //    directly since this is a class method.
    cout << "(" << x << ", " << y << ")" << endl;
    return;
}

// STANDALONE FUNCTION EXAMPLE FOR PRINTING (x, y)
// This function prints a coordinate out as (x, y).
// It takes one Coordinate argument to print.
// It returns nothing.
// NOTICE: We do not need to scope this function
//    because it is not a class method.
// NOTICE: We need a Coordinate object because
//    there is no Coordinate calling object
//    like there is with class methods.
// NOTICE: We do not have access to any private
//    attributes, so we have to use "get" methods.
void printCoordFunction(Coordinate p)
{
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
    return;
}
