// CSC 24400
// This file shows the use of the getline() function, which is used to
//    read an entire line of text from an input stream, including spaces,
//    until a specified delimiter character is encountered ("\n" by default)
// getline() provides another way for us to get input besides using the >> operator
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s1 = "";
    string s2 = "";
  
    // Create input file stream object and open input file
    ifstream fin("getlineInput.txt");
  
    // TRY IT YOURSELF:
    //    - Comment out the next line
    //    - Use fin and the >> operator to read into s1 instead
    //    - Observe the difference in output from doing so
    getline(fin, s1);
  
    getline(fin, s2);
  
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}
