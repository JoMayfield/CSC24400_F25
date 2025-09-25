#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/***********************************************************************************************
 * Author: Austin McCowan
 * Date created: 09/2025
 * Purpose: Solve sudoku puzzles.
 * If does not compile with just g++, do "g++ -Wall -ansi -pedantic -std=c++20 sudoku.cpp"
 * NOTE: THIS DOES NOT ACCEPT ANY SUDOKU BOARD WHOSE DIMENSION IS BIGGER THAN 9x9.
 ***********************************************************************************************/

// This can be ignored for the most part. Identical to a class. This project can be reworked to operate fine
// without this, but it simplifies things.
struct board {
    string layout;      // string representation of layout. Easier to traverse and manip than a double array
    string original;    // Merely an easy way to keep track of the original layout. May not be needed
    int dimension;      // dimension = side length. Board layout will be dimension^2.
};

// This merely prints out to console the solved sudoku puzzle in a grid like style (i.e., it looks like a sudoku puzzle)
void constructprint(board& b) {
    /*
     * board& b: the board.
     */
    for (int d = 0; d < b.dimension; d++) {
        for (int i=0; i < b.dimension; i++) {
            cout << b.layout[(d*b.dimension)+i] << " ";
        }
        cout << endl;
    }
}

// Confirms whether or not the board is in a valid state.
bool validate(board& b, int check) {
    /*
     * board& b: the board being validated
     * int check: the position being checked
     * returns (bool): True if board is valid, false otherwise.
     */

    // Grab relevant positions
    int dim = b.dimension;
    int row = check/dim;
    int col = check%dim;
    int value = b.layout[check] - '0'; // NOTE: If you see adding or minus zero, this is converting between char and int.

    // CHECKS =================================================================================================================================
    // Do not worry too much about how these work, just know these are CHECKING the board and making sure whatever move we made prior is VALID

    //  test if curr row is valid
    for(int i = (row*dim); i<(row*dim)+dim; i++ ) {
        if ((b.layout[i] - '0') == value && value != 0 && i != check) { return false; }
    }

    // Test if curr column is valid
    for(int i = (col); i<=(dim*(dim-1))+col; i+=dim ) {
        if ((b.layout[i] - '0') == value && value != 0 && i != check) { return false; }
    }

    // if dimension can be square rooted, we can test the square.
    if ( int(sqrt(dim)) == sqrt(dim) ) {
        int offset = (((row / sqrt(dim))*sqrt(dim))*dim) + (col / sqrt(dim))*(sqrt(dim)); // Makes it far easier to iterate
        for (int r = 0; r < sqrt(dim); r++) {
            for (int c = 0; c < sqrt(dim); c++) {
                if ((b.layout[r*dim+c+offset] - '0') == value && value != 0 && (r*dim+c+offset) != check) { return false; }
            }
        }
    }

    // Finished validation successfully
    return true;
};

// Recursive sudoku solver
bool boardManip(board& b, int spot) {
    /*
     * board& b: the board being validated
     * int spot: the position being checked
     * returns (bool): True if a solution is reached, false otherwise.
     */

    // If reached end of board ( BASE CASE )
    if (spot >= (b.dimension*b.dimension)) {
        return true;
    }
    // Otherwise, progress ( RECURSION )
    if ( (b.layout[spot] - '0') != 0 ) { if (boardManip(b, spot+1)) { return true; } } // Pre-existing number. We can skip.
    else {
        // Empty spot reached, check every single viable option.
        for (int i = 1; i <= b.dimension; i++) {
            b.layout[spot] = i + '0';
            if (validate(b, spot)) { if ( boardManip(b, spot+1) ) { return true; } }
            b.layout[spot] = b.original[spot];  // Our prior attempt failed; revert back to original. (Could potentially be moved out and after for loop to reduce runtime)
        }
    }
    // If no valid progress made
    return false;
}

// Main function.
int main(int argc, char **argv) {
    // Setup board
    board b;
    cout << "Enter board: ";
    cin >> b.layout;                        // board values ( ex: "0140030200300000" )
    b.original = b.layout;                  // If needed, keeps track of original layout for easy replacement.
    b.dimension = sqrt(b.layout.length());  // Dimension: size length. Best when squared numbers (4, 9)

    // Print whether or not the program successfully solved the puzzle.
    if ( boardManip(b, 0) ) { cout << "Success" << endl; }
    else { cout << "Failed" << endl; }
    cout << "Result: " << b.layout << endl;
    constructprint(b);

    return 0;
};
