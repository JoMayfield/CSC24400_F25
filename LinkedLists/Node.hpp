// CSC 24400
// Header file for Node class
#ifndef _NODE_HPP // Remember pre-processing directives!
#define _NODE_HPP

#include <iostream>
#include <string>
using namespace std;

class Node {
  private:
    // The data for a node in this example is one string
    // (can be implemented as a string or string*)
    string* _data;
    // We need a pointer to the next node
    Node *_next;
    
  public:
    // Default + parameterized constructors
    Node() : _data(nullptr), _next(nullptr) {}
    Node(const string &val) : _data(new string(val)), _next(nullptr) {}
    
    // Getters and setters (rolled into one)
    string* & ndata() {return _data;}
    Node* & next() {return _next;}

    // print() helper method for op<<
    ostream& print(ostream &os) const;
};

ostream& operator<<(ostream &os, const Node &n);

#endif
