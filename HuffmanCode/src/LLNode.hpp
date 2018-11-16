

#ifndef LLNODE_HPP_
#define LLNODE_HPP_


#include <stdlib.h>
#include <iostream>
using namespace std;

class LLNode {
	friend class LLPQ;
    char data;
    int dataCount;
    string genCode;
    LLNode *prev;
    LLNode *left;
    LLNode *right;
    LLNode *next;

  public:
    LLNode(char x);
    ~LLNode();
    void printNode();
};

#endif
