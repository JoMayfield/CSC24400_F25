// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
    Coordinate c1 = Coordinate(3, 17);

    // Notice the difference in calling the method vs. function!
    // Printing c1 using the method we defined
    c1.printCoordMethod();
    // Printing c1 using the function we defined
    printCoordFunction(c1);

    return 0;
}
