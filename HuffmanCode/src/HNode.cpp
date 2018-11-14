/*
 * HNode.cpp
 *
 *  Created on: Nov 13, 2018
 *      Author: Kj
 */
#include "HNode.hpp"

HNode::HNode(char x){
	data = x;
	dataCount = 1;
	genCode = "";
	prev = NULL;
	left = NULL;
	right = NULL;
	next = NULL;
}  //Constructor
HNode::~HNode() {
	if (next != NULL) {
		cout << "deleting may cause memory leak." << endl;
	}  //if
} //destuctor



