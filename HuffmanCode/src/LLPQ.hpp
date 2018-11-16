#ifndef LLPQ_HPP_
#define LLPQ_HPP_
#include "LLNode.hpp"

#include <stdlib.h>
#include <iostream>
using namespace std;

class LLPQ {

    LLNode *first;
    int size;
    
  public:
    LLPQ();

    ~LLPQ();

    void printLLPQ();
    // prints out the linked list/ priority queue
    void addFirst(char x, string co="-1");
    //adds the very first character node to the linked list, along with an //original default code value set to -1.
    void addAtFirst(char x, string co="-1");
    // add a new node to the beginning of the linked list (modifying the first
    //pointer and the size, and setting the code field to co, (default = -1).
    LLNode *remFirst();
    // removes the first node from the list (to be used in creating the
    //Huffman code
    string findCode(char k);
    // goes through the linked list, finds the character k, and returns the code associated with that node – used to translate a file once you have the code (Note that if we had studied hash tables/maps, this would be so much easier using them
    void sortLL();
    // sorts your linked list, based on the counts in the nodes (so the character that occurred the least frequently will be at the beginning of the list, and the character that occurred most frequently will be at the end of the list.
    void insertUnique(char c);
    // inserts only unique characters into the linked list. If the character is already in the linked list, it increases the count of that character
    void insertInOrder(LLNode *n);
};

#endif
