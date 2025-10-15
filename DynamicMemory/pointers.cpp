// CSC 24400
// This program introduces pointers
#include <iostream>
using namespace std;

int main() {
  int val = 4; // val is a int variable
  int* intPtr; // intPtr is a pointer to an int variable
 
  // Set intPtr to the ADDRESS-OF val
  //    (because pointers are ADDRESSES!)
  intPtr = &val;

  // Two ways to access that integer now:
  // 1. Can access val directly (as per usual)
  cout << val << endl; // Outputs 4
  // 2. Can de-refrence intPtr with * (this is us "following the arrow")
  cout << *intPtr << endl; // Outputs 4
 
  // Assign 7 to the int variable pointed to by val
  *intPtr = 7;

  // Same two ways to access that integer:
  cout << val << endl; // Outputs 7
  cout << *intPtr << endl; // Outputs 7
 
  return 0;
}
