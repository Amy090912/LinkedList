/*
* StringLinkedList.h
*/
#ifndef STRINGLINKEDLIST_H_
#define STRINGLINKEDLIST_H_
#include "StringNode.h"
class StringLinkedList {

public:
StringLinkedList();

~StringLinkedList();
bool empty() const;
const string& front() const;
void addFront(const string& e);

void removeFront();

int getSize();

private:
StringNode* head;
int size;

};
#endif /* STRINGLINKEDLIST_H_ */
