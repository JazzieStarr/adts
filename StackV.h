//Implementing a Stack ADT with a vector

#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;

class Stack
{
private:

      vector<int> data; //data is the name of the 
  

public:

    // No default c'tor needs to be declared 
    // The vector "knows" how to initialize itself


   // No d'tor needs to be declared
   // The vector "knows" how to destroy itself

   int size(); //return the elements in the stack

   void push(int);//insert element at top of stack

   void pop();//remove element from top of stack

   int top();//view element at top of stack

   void clear(); //remove all elements

};

#endif
