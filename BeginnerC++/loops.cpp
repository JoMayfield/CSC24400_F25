// CSC 24400
// This file shows some examples of for-loops and while-loops in C++.
// (Loops in C++ should be easy because they look the same as they do in Java!)
#include <iostream>
using namespace std;

int main()
{
  	// TRY IT YOURSELF: Try changing each of the three parts of the following for-loop:
    //    - The initialization of i (where we start)
    //    - The looping condition (where we stop)
    //    - The change/update (how we get from start --> stop)
    
  	// "i <= 10" and "i < 11" are equivalent
  	for(int i = 1; i <= 10; i++)
    {
  		  cout << i << endl;
  	}
  	
  	// TRY IT YOURSELF: Try changing parts of this while-loop, too!
  	int x = 15;
  	while(x > 3)
  	{
    		cout << "x is: " << x << endl;
    		x = x-4;
  	}
  	
  	// TRY IT YOURSELF: Re-write the first (for-)loop as a while-loop
  
    // TRY IT YOURSELF: Re-write the second (while-)loop as a for-loop
  
  	return 0;
}
