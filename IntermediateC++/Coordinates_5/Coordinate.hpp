// CSC 24400
// This file shows an updated Coordinate class definition with the addition of 
//    the "const" keyword used with parameters and with methods and the addition
//    of some return-by-reference examples.
// "const":
//    * "const" parameter: The parameter cannot and will not change within the method
//    * "const" method: The current/calling object cannot and will not change within the method
// Pass-by-Const-Reference:
//    * We often prefer to PBR so we don't waste time and space making a copy of an argument
//    * But if we don't want that argument or parameter to change, we can also make it "const"
//    * Hence, we end up with PBCR
//    * E.g. const int& num --> "const" and PBR (&) at the same time
// Return-by-Reference:
//    * Returning a variable by reference (&) means the method will return a
//        reference to the variable, rather than a copy of it
//    * When we return-by-reference, we can use the method call on the LHS of the
//        assignment (=) operator
//    * Be careful to NOT return a reference to a local variable! (Why?...)
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
        // a and b are const params because they don't change
        // Pass a and b by reference, too, to avoid making a copy
        Coordinate(const int &a, const int &b) {x = a; y = b;}

        // GETTERS AND SETTERS --------------------------
        // Mutators - NOT const methods because they change the object!
        // a and b are const params because they don't change (even though x and y do)
        // Pass a and b by reference, too, to avoid making a copy
        void setX(const int &a) {x = a;}
        void setY(const int &b) {y = b;}

        // Accessors - const methods because they don't change the object
        //    (They just return an attribute)
        int getX() const {return x;}
        int getY() const {return y;}

        // Mutator and accessor all in one - thanks to return-by-reference!
        // Returns a reference to the x attribute of the current object
        // Allows us to both change and access x
        //    (Example for accessing: cout << coord.X(); )
        //    (Example for mutating: coord.X() = 5; )
        int& X() {return x;}

        // !!! TRY IT YOURSELF !!!
        //    1. Define a get/set combo for the y attribute
        //    2. Call it in main()

        // OTHER METHODS -------------------------------
        // print method is const because it doesn't change the object
        //    (It just prints the object's info)
        void printCoordMethod() const;

        // Return-by-reference because we want to be able to chain calls to scale()
        //    (E.g. coord.scale(2).scale(3) only works if we return a REFERENCE to Coordinate)
        // Returns a reference to the current Coordinate object
        // scale() is NOT const because it DOES change the object
        // val is a const param because val doesn't change
        // Pass val by reference, too, to avoid making a copy
        Coordinate& scale(const int &val);
};

void printCoordFunction(const Coordinate &p);

#endif // End the definition
