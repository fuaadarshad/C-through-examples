#include<iostream>
using namespace std;

void fun()
{
	throw 10;
}
int main()
{
	system("clear");
	
	cout<<"Welcome"<<endl;
	
	try	
	{
		fun();
		cout<<endl<<"In Try";
	}


	catch(int e) 	
	{	
		cout<<"\nException no :"<<e;	
	}	

	cout<<endl<<"\nLast Line";
	getchar();
}

