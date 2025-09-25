// CSC 24400
// This file shows an updated Coordinate class definition with a method defined for
//    printing a coordinate point
#ifndef _COORDINATE_HPP
#define _COORDINATE_HPP

#include <iostream>
using namespace std;

class Coordinate
{ 
    private:
        int x;
        int y;

    public:
        // CONSTRUCTORS ---------------------------------
        Coordinate() {}
        Coordinate(int a, int b) {x = a; y = b;}

        // GETTERS AND SETTERS --------------------------
        void setX(int a) {x = a;}
        void setY(int b) {y = b;}

        int getX() {return x;}
        int getY() {return y;}

        // OTHER METHODS -------------------------------
        // Class method to print in the format (x, y)
        void printCoordMethod();
};

// Function declaration goes OUTSIDE of the class
//    (because it's not a method - it is a standalone function)
void printCoordFunction(Coordinate p);

#endif // End the definition
