#include<iostream>
using namespace std;

//CALL BY VALUE


int sum(int,int);

int main()
{
	int a=5,b=6,c;
	c=sum(a,b); // <<-- a & b actual arguments are "ordinary variables"
	cout<<"sum="<<c<<endl;
}


int sum(int x,int y) // <<-- x & y formal arguments are "ordinary variables"
{
	return (x+y);
}


//CALL BY ADDRESS


int sum(int*,int*);

int main()
{
	int a=5,b=6,c;
	c=sum(&a,&b); 
	cout<<"sum="<<c<<endl;
}


int sum(int *x,int *y) // <<-- (*x & *y) formal arguments are "pointer variables"
{
	return (*x+*y);
}


//CALL BY REFERENCE


int sum(int &,int &);

int main()
{
	int a=5,b=6,c;
	c=sum(a,b); 
	cout<<"sum="<<c<<endl;
}


int sum(int &x,int &y) // <<-- (&x and &y) formal arguments are "reference variables"
{
	return (x+y);
}


