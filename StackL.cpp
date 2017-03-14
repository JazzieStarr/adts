#include "StackL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


	
int Stack::size()
 {
    return data.size();
 }


void Stack::push(int val)
{
   data.insert(val,1);
}
	

void Stack::pop()
{
	if (data.size()==0)//if the location is invalid 
	     throw out_of_range("Stack::pop()");//throw an "out_of_range" exception
	
	else
            data.remove(1);
}

void Stack::clear()
{
   data.clear();	
    
}

int Stack::top()
{
   if (data.size()==0) //if the location is invalid
     throw out_of_range("Stack::top()");//throw an "out_of_range" exception
   else
    return data.get(1);
}
