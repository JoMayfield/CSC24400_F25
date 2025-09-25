// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp" // <-- We have to include the header file for our class
using namespace std;

int main()
{
    Coordinate c1 = Coordinate();

    cout << c1.x << ", " << c1.y << endl;

    return 0;
}
