// CSC 24400
// This file shows an updated Coordinate class definition with the "addition" (no pun intended)
//    of the overloaded addition (+) operator for the Coordinate class
// Operator overloading:
//    * Allows us to give meaning to an operator for a user-defined class
//    * E.g. We know what it means to add two ints, two floats, etc., but what does it
//        mean to add two Coordinate points? Our computer doesn't know... but maybe we do!
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
        Coordinate(const int &a, const int &b) {x = a; y = b;}

        // GETTERS AND SETTERS --------------------------
        void setX(const int &a) {x = a;}
        void setY(const int &b) {y = b;}

        int getX() const {return x;}
        int getY() const {return y;}

        int& X() {return x;}

        // OTHER METHODS -------------------------------
        void printCoordMethod() const;

        Coordinate& scale(const int &val);

        // Overloading the + operator to add two Coordinate points
        Coordinate operator+(const Coordinate &p2);

        // FRIEND FUNCTION -----------------------------
        friend void translate(Coordinate &p, const int &xOffset, const int &yOffset);
};

void printCoordFunction(const Coordinate &p);

#endif // End the definition
