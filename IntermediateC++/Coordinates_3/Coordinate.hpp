// CSC 24400
// This file shows an updated Coordinate class definition where x and y have been made private.
//    This means we also need "get" and "set" methods for each instance attribute we still
//    want to be able to have access to.
#ifndef _COORDINATE_HPP
#define _COORDINATE_HPP

#include <iostream>
using namespace std;

class Coordinate
{ 
    // Specify the access (e.g. public or private)
    //    for a whole section at a time
    private:
        // INSTANCE ATTRIBUTES (usually private)
        int x;
        int y;

    public:
        // CLASS METHOD DECLARATIONS
        // CONSTRUCTORS ---------------------------------
        // Default Constructor
        Coordinate() {}
        // Parameterized Constructor
        Coordinate(int a, int b) {x = a; y = b;}

        // GETTERS AND SETTERS --------------------------
        // "set" Methods
        void setX(int a) {x = a;}
        void setY(int b) {y = b;}

        // "get" Methods
        int getX() {return x;}
        int getY() {return y;}
};

#endif // End the definition
