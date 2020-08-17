#include<iostream>
#include<string>
#include<string>
#include<string.h>
using namespace std;

int main()
{	
	system("clear");
	string s1="Hello";
	char str[20];
	strcpy(str,s1.c_str()); //for copying a string in a c_styled array
	cout<<"str="<<str<<endl;
	getchar();
}
