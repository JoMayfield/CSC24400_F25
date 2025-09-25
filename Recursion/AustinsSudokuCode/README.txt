==================================================================================================
Author: Austin McCowan
Date created: 09/2025
Purpose: Solve sudoku puzzles.
==================================================================================================
This program is designed to showcase working with recursive backtracking. It uses some unique 
elements and features that have not been showcased in class (Some in part to avoid merely copying
and pasting this for project #1), such as using and manipulating a string instead of a 2D array,
or the usage of a struct.

However, the program can be recreated without these into a format acceptable with all currently 
taught material (Intentionally, it still wont solve your project as is).

To solve the sudoku puzzle, the program will iterate through each and every index within the
puzzle and attempt to either:
	1. skip if number already exists.
	2. Attempt every single possible valid option within said spot

If it fails to find a valid number for a spot, it will backtrack.
Functionally, however, it should be noted the program will backtrack regardless, returning 
either true or false. In addition, because of this and with some tweaks, the program could find 
every single possible solution to the given board.

--------------------------------------------------------------------------------------------------
WARNINGS/BUGS:
1. This program does not accept any sudoku board whose dimension is bigger than 9x9.

2. If this does not compile with "g++ sudoku.cpp", please do:
	g++ -Wall -ansi -pedantic -std=c++20 sudoku.cpp
--------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------
SETUP/GUIDE (That is guaranteed):
1. Compile file:
	g++ -o sud -Wall -ansi -pedantic -std=c++20 sudoku.cpp

2. Run file:
	./sud
	
3. Input board (a string of size dimension^dimension. i.e., if 9x9, 81 characters.)
	Enter board: 800406007000000400010000650509030780000070000048020103052000090001000000300902005

4. Results will then print. In this example:
	Success
	Result: 835416927267581439714293658529134786193678542948725163452867391681359274376942815
	8 3 5 4 1 6 9 2 7 
	2 6 7 5 8 1 4 3 9 
	7 1 4 2 9 3 6 5 8 
	5 2 9 1 3 4 7 8 6 
	1 9 3 6 7 8 5 4 2 
	9 4 8 7 2 5 1 6 3 
	4 5 2 8 6 7 3 9 1 
	6 8 1 3 5 9 2 7 4 
	3 7 6 9 4 2 8 1 5
--------------------------------------------------------------------------------------------------
