# Version 7
## Changes From Version 6:
- Defined `operator+()` as our first operator overloading example to add two Coordinate points

## To Compile:
`g++ main.cpp Coordinate.cpp`

## To Run:
`./a.out`

## Notes:
- We can overload an operator to give meaning to that operator for a user-defined class.
  - We normally couldn't do `coord1 + coord2` because our computer doesn't know what it means to add two Coordinates in the same way that it knows how to add two integers, add two floats, add an integer and a float, etc.
  - We can define a special method called `operator+()` to allow for the above ^ functionality.
  - We could define `operator+()` again to take an integer argument if we wanted to add a Coordinate point and an integer, too.
- Think about what other operators might be useful for the Coordinate class.
- Think about what operators might be useful for other classes you've defined in previous courses.
