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

    // Scale c1 by 5
    c1.scale(5);

    c1.printCoordMethod();

    // Scale c1 by 2 and then by 3
    // We can chain calls to scale() because we use return-by-reference
    c1.scale(2).scale(3);

    c1.printCoordMethod();

    // Call X(), our get/set combo method
    // We can use it on the LHS of = because we use return-by-reference
    c1.X() = 1;

    c1.printCoordMethod();

    return 0;
}
