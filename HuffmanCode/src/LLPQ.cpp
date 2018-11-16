#include "LLPQ.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

LLPQ::LLPQ() {
	first = NULL;
	size = 0;

}

LLPQ::~LLPQ(){
}

void LLPQ::printLLPQ() {
  LLNode *tmp = first;
  while(tmp != NULL) {
    tmp->printNode();
    tmp = tmp->next;
  }
}
// prints out the linked list/ priority queue

void LLPQ::addFirst(char x, string co) {
  LLNode *tmp = new LLNode(x);
  first = tmp;
  size = 1;
  first->dataCount = 1;
  first->genCode = co;
}
//adds the very first character node to the linked list, along with an //original default code value set to -1.

void LLPQ::addAtFirst(char x, string co) {
  LLNode *tmp = new LLNode(x);
  LLNode *tmp2 = first; //Grabs first Node
  first = tmp; //Sets first field in LLPQ to new node
  first->next = tmp2; //Sets first field's next node to original node
  first->next->prev = first; //Sets original node's previous node to new node
  size += 1;
  first->genCode = co;

}
// add a new node to the beginning of the linked list (modifying the first
//pointer and the size, and setting the code field to co, (default = -1).

LLNode *LLPQ::remFirst() {
  LLNode *tmp = first;
  first = first->next;
  first->prev = NULL;
  size -= 1;
  return tmp;
}
// removes the first node from the list (to be used in creating the
//Huffman code

string LLPQ::findCode(char k) {
  LLNode *tmp = first;
  while(tmp != NULL) {
    if(tmp->data == k) {
      return tmp->genCode;
    } else {
      tmp = tmp->next;
    }
  }
  return "Could not find value";
}
// goes through the linked list, finds the character k, and returns the code associated with that node – used to translate a file once you have the code (Note that if we had studied hash tables/maps, this would be so much easier using them

//Uses Bubblesort
void LLPQ::sortLL() {

  
  // Checking for empty list
	 LLNode *tmp = first;
	 LLNode *tmp2 = NULL;
	 int flag, i;


  if (first == NULL)
      return; 
  
  do
  { 
      int flag = 0;

  
      while (tmp->next != tmp2) 
      { 
          if (tmp->dataCount > tmp->next->dataCount)
          {  
              swap(tmp, tmp->next);
              flag = 1; 
          } 
          tmp = tmp->next; 
      } 
      tmp2 = tmp; 
  } 
  while (flag); 

}
// sorts your linked list, based on the counts in the nodes (so the character that occurred the least frequently will be at the beginning of the list, and the character that occurred most frequently will be at the end of the list.

void LLPQ::insertUnique(char c) {


  if(first == NULL) {
    addFirst(c);
  } 
  LLNode *tmp;
  string genCodeNode = findCode(c);
  if(genCodeNode == "Could not find value") {
    addAtFirst(c);
  } else {
	  while(tmp != NULL){
		  if(tmp->data == c){
			  tmp->dataCount += 1;
		  }
		  else{
			  tmp = tmp->next;
		  }
	  }


  }
}
// inserts only unique characters into the linked list. If the character is already in the linked list, it increases the count of that character

void LLPQ::insertInOrder(LLNode *n) {
  //inserts the node n into the linked list in order of its count value – this will be used in the creation of the Huffman code.
  addAtFirst(n->data);
  sortLL();
}
