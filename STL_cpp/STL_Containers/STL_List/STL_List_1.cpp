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
       system("clear");

       	list<string> l2 {"Fuaad","Hena","Seema","Arshad"};
	
	l2.push_back("Bhopal");

	l2.push_front("azhan");


	list<string>::iterator p=l2.begin();	

	while(p!=l2.end())
	{
		cout<<*p<<" ";
		p++;
	}

	cout<<endl<<"Total values in the list are "<<l2.size()<<endl;
	
}




