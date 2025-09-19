// CSC 24400
// This file shows the usage of global variables in C++
// Key takeaways:
//    - Using global variables is generally considered BAD PRACTICE
//    - Be careful when naming local vars the same as global vars
//    - Generally, stay away from using global vars + be intentional about it when you do
#include <iostream>
using namespace std;

// Create global variable
int myVar;

void myFnct()
{
    //int myVar = 1000; // Creates variable local to myFnct()

    // WITH PREV LINE:  myVar refers to local variable
    // COMMENTING OUT PREV LINE: myVar refers to global variable
    myVar = 1000;
  
    cout << myVar << endl;
    return;
}

int main()
{
    //myVar = 7; // myVar refers to global variable

    int myVar = 7; // Creates variable local to main()
    
    cout << myVar << endl;
    myFnct();
    cout << myVar << endl;

    return 0;
}
