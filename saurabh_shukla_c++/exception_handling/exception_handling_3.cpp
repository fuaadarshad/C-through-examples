#include<iostream>
using namespace std;

int main()
{
	system("clear");
	int i=2;
	cout<<"Welcome"<<endl;
	try	
	{
		if(i==1)
			throw 1;
		if(i==2)
			throw "hello";
		if(i==3)
			throw 4.5;
		cout<<endl<<"In Try";
	}

	//if we want the same action to be performed for all the throw we can either write three catch or just one catch with "ellipsis"

	catch(...) //catch with ellipsis	
	{	
		cout<<"\nPlease try again";	
	}	

	cout<<endl<<"\nLast Line";
	getchar();
}

