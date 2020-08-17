#include<iostream>
#include<string>
using namespace std;

int main()
{	
	system("clear");
	string s1="Hello";
	s1.insert(2,"123");      //H e l l o <--string   so in this we are inserting string "123" at index no.2 and rest would get shifted
	cout<<"s1="<<s1<<endl;	 //0 1 2 3 4 <--index no.
	getchar();
}
