#include "StackV.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


void Stack::push(int val)
{
   data.push_back(val);
}
	
	
void Stack::pop()
{
	if (data.empty()==true)//if the location is invalid 
	     throw out_of_range("Stack::pop()");//throw an "out_of_range" exception
	else
            data.pop_back();
}
	
	
void Stack::clear()
{
    while (size()!=0)
    {
      data.clear();	
    } 
}

int Stack::size()
{
  return data.size();
}

int Stack::top()
{
   if (data.empty()==true)//if the location is invalid
      throw out_of_range("List::top()");//throw an "out_of_range" exception
   else 
      return data.back();     

}
