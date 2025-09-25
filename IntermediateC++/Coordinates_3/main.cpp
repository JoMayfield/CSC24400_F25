// CSC 24400
// This is our main() file containing our program that uses and tests
//    the Coordinate class we defined
#include <iostream>
#include "Coordinate.hpp"
using namespace std;

int main()
{
    Coordinate c1 = Coordinate();

    // The following no longer works because x and y are private attributes!
    // TRY IT YOURSELF: Uncomment this line and see what error you get!
    //cout << c1.x << ", " << c1.y << endl;

    // Gotta use our "get" methods now
    cout << c1.getX() << ", " << c1.getY() << endl;

    return 0;
}
