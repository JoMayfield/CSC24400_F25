# Version 5
## Changes From Version 4:
- Defined `X()` as a combination "get"/"set" method that uses return-by-reference so that we can both access and change the x attribute with the same method
- Defined `scale()` as a return-by-reference example that scales a Coordinate object
- Modified all methods/functions to use `const` and references when relevant

## To Compile:
`g++ main.cpp Coordinate.cpp`

## To Run:
`./a.out`

## Notes:
- Think about why defining an accessor/mutator combination might be beneficial
- Think about why passing-by-const-reference would be useful
  - When would we want a parameter to be `const`?
  - When would we want to pass a parameter by reference?
- Think about why we would want to make a method `const`
