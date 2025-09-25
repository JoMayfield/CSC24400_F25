// CSC 24400
// The following two lines and the last line of this file are additions we need to make
#ifndef _COORDINATE_HPP // If it's not defined
#define _COORDINATE_HPP // Define it

#include <iostream>
using namespace std;

class Coordinate
{ 
    public:
        int x;
        int y;

        Coordinate() {}
        Coordinate(int a, int b) {x = a; y = b;}
};

#endif // End the definition
