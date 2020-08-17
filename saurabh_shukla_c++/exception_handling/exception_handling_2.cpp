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
			throw 2;
		if(i==3)
			throw 3;
		cout<<endl<<"In Try";
	}

	catch(int e) 	
	{	
		if(e==1)
		cout<<"AKBAR "<<e;	
		if(e==2)
		cout<<"AMAR "<<e;	
		if(e==3)
		cout<<"ANTHONY "<<e;	
	}	

	cout<<endl<<"\nLast Line";
	getchar();
}

