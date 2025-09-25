# Version 3
## Changes From Version 2:
- Made the `x` and `y` instance attributes private (as they should be)
- Added "get" and "set" methods for the instance attributes, since they otherwise would no longer be accessible

## To Compile:
`g++ main.cpp Coordinate.cpp`

## To Run:
`./a.out`

## Notes:
- Instance attributes should be private to enforce encapsulation and maintain data integrity
- "Get" methods are "accessors"
  - E.g. `getX()` will allow us to *access* the value of the `x` attribute
- "Set" methods are "mutators"
  - E.g. `setX()` will allow us *mutate* (i.e. change) the value of the `x` attribute
