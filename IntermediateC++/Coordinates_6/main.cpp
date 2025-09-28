// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
    Coordinate c1 = Coordinate(3, 17);

    c1.printCoordMethod();

    // Translate c1 by (+15, +20)
    // It is function, not a method, so no calling object
    translate(c1, 15, 20);

    c1.printCoordMethod();

    return 0;
}
