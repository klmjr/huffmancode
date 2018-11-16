#include "LLNode.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

LLNode::LLNode(char x) {
  data = x;
  dataCount = 1;
  genCode = "";
  prev = NULL;
  left = NULL;
  right = NULL;
  next = NULL;
}

LLNode::~LLNode() {
  if (next != NULL) {
    cout << "deleting may cause memory leak" << endl;
  }
}

void LLNode::printNode() {
  cout << "Data:" << data << endl;
  cout << "Count:" << dataCount << endl;
}
