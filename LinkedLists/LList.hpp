// CSC 24400
// This is the header file for the linked list class
#ifndef _LLIST_HPP
#define _LLIST_HPP

#include <iostream>
#include <string>
#include "Node.hpp"
using namespace std;

class LList {
  private:
    // All a linked list is a pointer to the first node
    // (The connection between each node is taken care of in the node class)
    Node* _front;
    
  public:
    // Default constructor (no parameters)
    LList() : _front(nullptr) {}
    
    // Get and set
    Node* & front() {return _front;}
    
    // Methods to add to LL
    void addToFront(const string &newVal);
    void addToEnd(const string &newVal);
    
    // Method to remove from LL
    void removeVal(const string &valToRemove);

    // Method to find in LL (linear search)
    Node* findNode(const string &valToFind) const;

    // Method to print LL
    ostream& print(ostream &os) const;
};

ostream& operator<<(ostream &os, const LList &l);

#endif
