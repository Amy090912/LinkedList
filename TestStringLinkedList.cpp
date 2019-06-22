
/*
* TestStringLinkedList.cpp
*
* Created on: Apr 25, 2018
*
Author: ramesh
*/
#include <cstdlib>
#include <iostream>
#include "StringLinkedList.h"
using namespace std;


int main() {

  cout << "Yimin Long"<< endl;
  cout << "yla468" << endl;
  cout << "301307928" << endl;


  StringLinkedList L = StringLinkedList();
  string a;

  getline(cin,a);
  while(a != "")
    {
      L.addFront(a);
      getline(cin,a);
    }

	
  int i = 0;
  int length = L.getSize();
  string s[length];
  cout << "the length is " << length << endl<< endl;
  
  
  
  while(!L.empty())
    {
	  s[i] = L.front();
	  i++;
	  L.removeFront();
    }

   // a line with a concatenation of the strings in the sequence
   for(int i=length-1; i>=0; i--)
   {
	   cout << s[i];
   }
   
   cout << endl << endl;
   
   //the sequence of strings in reverse order
   for(int i=0; i<length; i++)
   {
	  cout << s[i] << endl;
   }

   cout << endl << "goodbye" << endl;
   
       return EXIT_SUCCESS;
}
