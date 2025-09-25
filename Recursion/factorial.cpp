// CSC 24400
// This files provides an introductory example of recursion
//    using the classic Factorial example.
//    Included is an iterative solution to the same problem
//    for comparison purposes
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

// ITERATIVE SOLUTION - involves looping
int factorialIterative(int n)
{
    int a = 1;
    // n! = 1 * 2 * 3 * ... * (n-1) * n
    for(int num = 1; num <= n; num++)
        a = a * num;
    return a;
}

// RECURSIVE SOLUTION - function calls itself
int factorialRecursive(int n)
{
    // BASE CASE
    // 1! = 1
    if(n == 1) // Would be better to check if(n<=1)... why?
        return 1;

    // RECURSIVE CASE
    // n! = n * (n-1)!
    return n * factorialRecursive(n-1);
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int iterAnswer = factorialIterative(n);
    int recAnswer = factorialRecursive(n);

    cout << "The factorial of " << n << "..." << endl;
    cout << "\tComputed iteratively: " << iterAnswer << endl;
    cout << "\tComputed recursively: " << recAnswer << endl;

    return 0;
}
