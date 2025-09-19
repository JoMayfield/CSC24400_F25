// CSC 24400
// This file covers what an array looks like in C++ and how to compute its length.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 7, 8};
  
    // Prints out the length of the array
    // sizeof(arr) will return the size (in BYTES) of the array
    // sizeof(int) will return the size (in BYTES) of an integer value
    cout << sizeof(arr) / sizeof(int) << endl;
  
    // arr.length is not defined
    // arr.length() is not defined
    // Arrays are NOT objects in C++
    //   so they will not use the dot notation
    //   we are used to seeing in Java
    // len(arr) is also not defined like it is in Python

    return 0;
}
