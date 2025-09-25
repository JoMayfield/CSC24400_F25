// CSC 24400
// This files provides another introductory example of recursion
//    using the classic Fibonacci Sequence example.
//    Fibonacci sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// Terms to know:
//    * Base Case:
//        - The condition that terminates the recursion
//        - Represents the simplest instance of the problem that has a quick,
//            easy answer without the need for further computation
//        - Without a proper base case(s) defined, we have infinite recursion :(
//    * Recursive Case:
//        - The case where the function calls itself
//        - The problem is not at its simplest form yet and requires further decomposition
//        - The recursive case(s) should ALWAYS bring the problem closer to a base case
// Recursion is all about breaking down a problem into smaller parts of the same problem!
#include <iostream>
using namespace std;

// Computes the n-th Fibonacci number recursively
// f(n) = f(n-1) + f(n-2) for n > 1
// f(1) = 1, f(2) = 1
int fib(int n)
{
    // BASE CASES (n is 1 or 2)
    if(n <= 2)
        return 1;
    // RECURSIVE CASE (all other values of n)
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
  
    int answer = fib(n);
    cout << "The n-th Fibonacci number for n=" << n
        << " is " << answer << endl;

    return 0;
}
