// CSC 24400
// This file shows an updated Coordinate class definition with the addition of 
//    a "friend" function to translate a coordinate point
// Friend functions allow us to access private instance attributes and private methods
//    without actually being defined as methods of the class
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

        // Friend function to translate a Coordinate point
        // xOffset and yOffset are "const" because they shouldn't change
        // p is NOT "const" because p is being changed within this function
        friend void translate(Coordinate &p, const int &xOffset, const int &yOffset);
};

void printCoordFunction(const Coordinate &p);

#endif // End the definition
