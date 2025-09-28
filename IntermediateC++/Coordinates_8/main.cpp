// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
    Coordinate c1 = Coordinate();

    // Test overloaded << and >> operators
    cout << c1 << endl;

    cin >> c1;

    cout << c1 << endl;

    return 0;
}
