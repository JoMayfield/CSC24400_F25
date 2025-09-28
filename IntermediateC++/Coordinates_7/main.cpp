// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
    Coordinate c1 = Coordinate(3, 17);
    Coordinate c2 = Coordinate(8, 1);
    Coordinate c3;

    // Two equivalent ways to add two Coordinates
    //    1. Call operator+() explicitly
    //    2. Call operator+() implicitly by just doing c1 + c2
    c3 = c1.operator+(c2);
    c3 = c1 + c2;

    c3.printCoordMethod();

    return 0;
}
