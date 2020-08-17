// List class supports a bidirectional, linear list
//
// Vector supports random access but a list can be only accessed sequentially
//
// List can be accessed front to back or back to front
//
// CREATING A LIST OBJECT
//
// list<int> l1;
// list<int> l2 {11,22,33,44};
// list<string> l3 {"Fuaad","Hena","Seema","Arshad"};
//
// SOME USEFUL FUNCTION OF LIST CLASS
//
// 1)sort()
// 2)size()
// 3)push_back()
// 4)push_front()
// 4)pop_back()
// 6)reverse()
// 7)remove()
// 8)clear()

#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l1 {11,22,33,44};
        list<string> l2 {"Fuaad","Hena","Seema","Arshad"};

// for accessing an element of a List
// 	cout<<l1[0]; or cout<<l1[2]; are not not valid unlike in "Array" or "Vector" because random access is not allowed in "List"

	list<int>::iterator p=l1.begin(); // int* p=x; |(list<int>)-->int (iterator)--> * |	
       	
	while(p!=l1.end())     // can we write p!=l1.size() in place of p!=l1.end() ??? No, because != is a relational operator that can't be 
	{	 	       // used for two different data types (p->pointer to object of class list) & (l1.size->integer value giving size				     // of object of list)
	   cout<<*p<<" ";
	   p++;
	}

	cout<<endl<<"Total values in the list are "<<l1.size()<<endl;
	
	list<string>::iterator p1=l2.begin(); 	
	while(p1!=l2.end())      
	{	 	       
	   cout<<*p1<<" ";
	   p1++;
	}

	cout<<endl<<"Total values in the list are "<<l2.size()<<endl;

}




