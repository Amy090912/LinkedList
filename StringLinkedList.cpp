/*
* StringLinkedList.cpp
*/
#include "StringLinkedList.h"

StringLinkedList::StringLinkedList()

: head(NULL) { } //

StringLinkedList::~StringLinkedList()

{ while (!empty()) removeFront(); } //

bool StringLinkedList::empty() const

{ return head == NULL; } // is list

const string& StringLinkedList::front() const

{ return head->elem; }


void StringLinkedList::addFront(const string& e) {

StringNode* v = new StringNode;


v->elem = e;

v->next = head;
// head now follows v
head = v;
// v is now the head
 size++;
}

void StringLinkedList::removeFront() {
// remove front item
  
StringNode* old = head;// save current head

 
head = old->next;
// skip over old head
delete old;
// delete the old head
 size--;
}

 int StringLinkedList::getSize()
 {
   int count = 0;
   StringNode* current = head;
   while(current != NULL)
     {
       count++;
       current = current -> next;
     }
   return count;
   }

