/*
 * HNode.hpp
 *
 *  Created on: Nov 13, 2018
 *      Author: Kj
 */

#ifndef HNODE_HPP_
#define HNODE_HPP_
#include <iostream>
using namespace std;



class HNode {
	friend class SLL;  // allows another class to access private members of the Node class
	char data;
	int dataCount;
	string genCode;
	HNode *prev;
	HNode *left;
	HNode *right;
	HNode *next;
public:
	HNode(char x);
	~HNode();
}; //Node




#endif /* HNODE_HPP_ */
