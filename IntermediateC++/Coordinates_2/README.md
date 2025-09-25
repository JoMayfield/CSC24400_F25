# Version 2
## Changes From Version 1:
- Split program into multiple files
  - `coords.cpp` split into `Coordinate.hpp`, `Coordinate.cpp`, and `main.cpp`

## To Compile:
`g++ main.cpp Coordinate.cpp`

## To Run:
`./a.out`

## Notes:
- Do NOT compile header (`.hpp`) files!!!
- In any `.cpp` file, remember to `#include` the header file of any class you use!
  - Otherwise, you will not be able to use the class in that file
  - E.g. If we forgot to `#include "Coordinate.hpp"` in `main.cpp`, we wouldn't be able to use the Coordinate class
