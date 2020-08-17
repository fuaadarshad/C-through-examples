// SOME USEFUL FUNCTION OF LIST CLASS
//
// 1)pop_back()
// 2)pop_front()

#include<iostream>
#include<list>
using namespace std;

int main()
{
       system("clear");

       	list<string> l2 {"Fuaad","Hena","Seema","Arshad"};
	
	list<string>::iterator p=l2.begin();	
	while(p!=l2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<endl<<"Total values in the list are "<<l2.size()<<endl;

	l2.pop_back();
	
	list<string>::iterator p1=l2.begin();	
	while(p1!=l2.end())
	{
		cout<<*p1<<" ";
		p1++;
	}

	cout<<endl<<"Total values in the list are "<<l2.size()<<endl;
	
	l2.pop_front();
	
	list<string>::iterator p2=l2.begin();	
	while(p2!=l2.end())
	{
		cout<<*p2<<" ";
		p2++;
	}

	cout<<endl<<"Total values in the list are "<<l2.size()<<endl;
}




