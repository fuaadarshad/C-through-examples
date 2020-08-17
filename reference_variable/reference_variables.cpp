#include<iostream>
using namespace std;

int sum(int &,int &);
int main()
{
	int a=5,b=6;
	int s=sum(a,b);
	cout<<"sum is :"<<s;
	return 0;
}

int sum(int &x, int &y) //reference variable passed as formal argument
{			//int &x=a; 'x' is a reference to 'a'
	return (x+y);	//above means that 'x' is also sharing the same memory as that of 'a' 
			// if any chnages are made to either 'x'or'a' it would get reflected on another
		// for instance if we increment or decrement the value of 'x' the value of 'a' would also be incremented or decremented	
}
