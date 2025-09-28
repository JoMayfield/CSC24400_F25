// CSC 24400
// This file shows an updated Coordinate class definition with the addition of the
//    overloaded insertion (<<) and extraction (>>) operators. The overloading of these
//    operators also utilizes return-by-reference, providing more examples for that, as well.
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
        // printCoordMethod() is no longer relevant after overloading << - Why?
        void printCoordMethod() const;

        Coordinate& scale(const int &val);

        Coordinate operator+(const Coordinate &p2);

        // FRIEND FUNCTIONS ----------------------------
        friend void translate(Coordinate &p, const int &xOffset, const int &yOffset);

        // Overloading << so we can cout a Coordinate
        friend ostream& operator<<(ostream &os, const Coordinate &c);

        // Overloading >> so we can cin a Coordinate
        friend istream& operator>>(istream &is, Coordinate &c);
};

void printCoordFunction(const Coordinate &p);

#endif // End the definition
