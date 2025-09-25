// CSC 24400
// This file shows the definition of a basic Coordinate class to represent
//    a coordinate point (x, y).
// This is our first example of a class definition in C++!
// After this point, we will split this class definition across multiple files,
//    but this first early version is being posted for reference.
#include <iostream>
using namespace std;

// CLASS DEFINITION - this will go in our header (.hpp) file
// General syntax: class ClassName
class Coordinate
{ 
    public:
        int x;
        int y;

        // Default Constructor has an empty definition
        // A default constructor is provided to you by C++ UNTIL...
        //    you define another constructor (e.g. the parameterized constructor).
        //    Then, it takes it away, so we have to add it back in.
        Coordinate() {}

        // Parameterized Constructor
        // This is defined "in-line"
        Coordinate(int a, int b) {x = a; y = b;}
}; // <-- NOTICE THE SEMI-COLON

// CLASS IMPLEMENTATION - method definitions will go in our implementation (.cpp) file
// Nothing to see here at the moment...

// MAIN - this will likely go in a file called main.cpp
// main() is the core of our program!
int main()
{
    Coordinate c1 = Coordinate();

    cout << c1.x << ", " << c1.y << endl;

    return 0;
}
