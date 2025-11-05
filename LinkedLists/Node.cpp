// CSC 24400
// Implementation file for Node class
#include "Node.hpp" // Remember to include the corresponding header file!

// print() helper method to print a Node
// Example usage for Node n: n.print(cout)
ostream& Node::print(ostream &os) const
{
  if(_data == nullptr)
    os << "There's nothing here!";
  else
    os << *_data;
  return os;
}

// Operator<<() overloaded not as a friend
// Thus, cannot access private attributes, but can call the public print() helper method
ostream& operator<<(ostream &os, const Node &n)
{
  return n.print(os);
}
