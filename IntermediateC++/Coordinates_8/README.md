# Version 8
## Changes From Version 7:
- Defined `operator<<()` so that we could print out a Coordinate object like we would print out any other variable
  - E.g. `cout << coord1 << endl;`
- Defined `operator>>()` so that we could read in a Coordinate object like we would read in any other variable
  - E.g. `cin >> coord1;`

## To Compile:
`g++ main.cpp Coordinate.cpp`

## To Run:
`./a.out`

## Notes:
- Both `operator<<()` and `operator>>()` use return-by-reference.
  - What would be the advantage of returning a reference to the output or input stream, rather than simply returning the output or input stream itself?
- Both `operator<<()` and `operator>>()` can NOT be defined as methods of the Coordinate class (so we define them as friend functions instead).
  - Why might that be the case?
- Another way we could have defined `operator<<()` and `operator>>()` would be to not make them friends (which would restrict their access to private attributes and methods), but define two helper methods that ARE members of the class in which we print out a Coordinate and/or read in a Coordinate. Then, we could have the overloaded << and >> operators call those respective (`public`) methods.
  - Why would that also be valid?
