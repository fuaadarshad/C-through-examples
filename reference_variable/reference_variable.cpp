#include<iostream>
using namespace std;

int main()
{

int x=5;  //  x-->|_5_| 1000

int *p;	  //  p-->|_1000_| 2000
p=&x;

int &y=x; // (reference variable) we can say that "y" is another name of "x", any change that we would make in "y" would have the same effect on "x" 
y++;	
cout<<"x="<<x<<" y="<<y<<endl;
x++;
cout<<"x="<<x<<" y="<<y<<endl;
}


/* 
 
 1) Reference variable is an internal pointer
 
 2) Reference variable must be initialised during declaration--> int &y=x;

 3) It can be initialaized with already declared variables only
 	int x=5;
	int y=&x;

 4) Reference variables can't be updated
    A pointer could point to many variables-->
						int x=5,y=10;
						int *p=&x;<-- p is pointing "x"
						cout<<"*p="<<*p<<endl; -->*p=5
						p=&y;<-- now p is made to point at "y" 						
						cout<<"*p="<<*p<<endl; -->*p=10    				
					      

    A reference variable once becomes a "reference" to any variable, later it can't be updated
    					      int x=5,y=10;
					      int &u=x;
					      	  &u=y;-->wrong

 5) We can create any no of "reference variables" to a variable

int x=5,y=10;
int  &p=x;
int  &q=x;
int  &r=x;
int  &s=x;
int  &t=x;
p++;
cout<<p<<endl<<q<<endl<<r<<endl<<s<<endl<<t<<endl;

*/
