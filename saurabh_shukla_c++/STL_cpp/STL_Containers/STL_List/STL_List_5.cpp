// SOME USEFUL FUNCTION OF LIST CLASS
//
// 1)remove()
// 2)clear()

#include<iostream>
#include<list>
using namespace std;

int main()
{
       system("clear");

       	list<int> l1 {55,22,77,44,22,66,99,88,11,22};
	
	list<int>::iterator p=l1.begin();	
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;

	l1.remove(44); // this function removes the element which is entered in the parantheses->() from the list, but if that element doesn't
		       // exists in the list then no change takes place

	list<int>::iterator p1=l1.begin();	
	while(p1!=l1.end())
	{
		cout<<*p1<<" ";
		p1++;
	}
	cout<<endl;

	l1.remove(22); // what would happen if the element entered in the parantheses appears more than once in the list ????
		       // All the elements in the list having that value will be removed from the list

	list<int>::iterator p2=l1.begin();	
	while(p2!=l1.end())
	{
		cout<<*p2<<" ";
		p2++;
	}
	cout<<endl;


	l1.clear(); //this function would clear the entire list 
		    

	list<int>::iterator p3=l1.begin();	
	while(p3!=l1.end())
	{
		cout<<*p3<<" ";
		p3++;
	}
	cout<<endl;
}




