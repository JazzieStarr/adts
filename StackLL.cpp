#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class Stack::Node //self-referential Node class
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	   //link is a data member which is a pointer 
	   //to an object of the same type (i.e. Node)
	
	};//end Node class definition (can only be seen by the List class)


Stack::~Stack()
{
    while(num_elements > 0)
      pop();
}
	
int Stack::size()
 {
    return num_elements;
 }


void Stack::push(int val)
{
		
	  Node* newPtr = new Node{val};
	  newPtr->link = frontPtr;
	  frontPtr = newPtr;
          num_elements++;
 }

void Stack::pop()
{
	if (size()==0)//if the location is invalid 
	     throw out_of_range("Stack::pop()");//throw an "out_of_range" exception
	
	else
        {
        Node* delPtr;
	delPtr = frontPtr;
	frontPtr = frontPtr->link;
	delete delPtr;
	num_elements--;
	}
}
	
	
	
void Stack::clear()
{
    while (size()!=0)
      pop();	
    
}

int Stack::top()
{
   if (size()==0) //if the location is invalid
         throw out_of_range("List::get(...)");//throw an "out_of_range" exception

   else
   {
      Node *iPtr = frontPtr;
      return iPtr->data;
   }
}
