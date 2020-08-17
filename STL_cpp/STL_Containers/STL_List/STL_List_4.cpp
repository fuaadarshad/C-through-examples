// SOME USEFUL FUNCTION OF LIST CLASS
//
// 1)reverse()

#include<iostream>
#include<list>
using namespace std;

int main()
{
       system("clear");

       	list<int> l1 {55,22,77,44,66,99,88,11};
	
	list<int>::iterator p=l1.begin();	
	while(p!=l1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;

	l1.reverse(); //this function reverses the entire list

	list<int>::iterator p1=l1.begin();	
	while(p1!=l1.end())
	{
		cout<<*p1<<" ";
		p1++;
	}
	cout<<endl;

}




