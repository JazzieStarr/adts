#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

L1.insert(5,1);
L1.insert(12,2);
L1.insert(34,2);
L1.insert(15,3);
cout << "L1 has "<<L1.size()<<" elements."<<endl;
L1.remove(2);
L2.insert(8,1);
cout<<"L1 has "<<L1.size()<<" elements."<< endl;
cout<<"L2 has "<<L2.size()<<" elements."<< endl;
cout<<"Have retrieved "<<L1.get(2)<<" from list of L1."<<endl;
cout<<"Have retrieved "<<L2.get(1)<<" from list of L2."<<endl; 
L1.clear();
cout<<"L1 has "<<L1.size()<<" elements."<< endl;

}
