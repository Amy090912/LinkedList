/*
* StringNode.h
*
* Created on: Apr 25, 2018
*
Author: ramesh
*/
#ifndef STRINGNODE_H_
#define STRINGNODE_H_
#include <string>
using namespace std;
class StringNode {

private:
string elem;
StringNode* next;
// a node in a list of
// element value
// next item in the list
friend class StringLinkedList;

};
#endif /* STRINGNODE_H_ */
