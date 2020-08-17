#include<iostream>
#include<string>
using namespace std;

int main()
{	
	system("clear");
	//index no.0123456789...13.....          "o" in "online" has index no.13
	string s1="Hello online online students";
	int i=s1.rfind("online"); //it returns the index from backwards
	
	cout<<"i="<<i<<endl;
	getchar();
}
