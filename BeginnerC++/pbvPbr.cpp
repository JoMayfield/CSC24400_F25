// CSC 24400
// This file showcases some pass-by-value and pass-by-reference examples.
// Terms to know:
//    * Pass-By-Value:
//        - A COPY of the argument is made
//        - We are literally passing in the VALUE of the arg, not the arg itself
//        - Consequence: Any changes made to the parameter inside the function do NOT
//            affect the original variable outside of the function
//    * Pass-By-Reference:
//        - We are passing in a REFERENCE to where the arg is located in memory
//        - No copies are made because the parameter refers to the original variable
//        - Consequence: Any changes made to the parameter inside the function DO affect
//            the original variable outside of the function (because they're the same)
// At this point:
//    - We pass by reference when we want to be able to make lasting changes to the argument
//        inside the function.
//    - Otherwise, we pass by value.
// Very soon in the future, we will have more considerations:
//    - Passing by value creates a copy, which is NOT memory efficient!
//    - So even when we don't want to make lasting changes, we will still almost always
//        pass by reference... just make the argument "const"!
#include <iostream>
using namespace std;

// Passing argument a by value
// Passing argument b by reference (note the &)
void increment(int a, int &b)
{
    a++; // PBV: Changes will NOT get reflected in calling function
    b++; // PBR: Changes WILL get reflected in calling function
    return;
}

// To swap the value of two variables inside this function,
//    they will have to be passed by reference so we can
//    actually change the respective args back in the calling
//    function (main())
// TRY IT YOURSELF: Remove the ampersand and observe how this
//    function no longer swaps the two variables when we pass-by-value!
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}

int main()
{
    int num1 = 1;
    int num2 = 1;

    cout << "Before calling increment()\t:";
    cout << num1 << " -- " << num2 << endl;

    increment(num1, num2);

    cout << "After calling increment()\t:";
    cout << num1 << " -- " << num2 << endl << endl;

  
    int num3 = 42;
    int num4 = 31;

    cout << "Before calling swap():\t";
    cout << num3 << " -- " << num4 << endl;
  
    swap(num3, num4);
  
    cout << "After calling swap():\t";
    cout << num3 << " -- " << num4 << endl;

    return 0;
}
