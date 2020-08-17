//the job of dynamic constructor is the creation of such a memory block which is being pointed by a member of the object 
//	 _________________
//	|  __   __   __	  |		class Student
//	| |__| |__| |__|  |		{ 
//	|  a	 b   | c  |	 	 private:
//	|____________|____|	   		 int a,b;
//		     |		    	 	 int *c;  
//		     | 		   	 public:
//		     |	    ____		Student() -----> this constructor is known as dynamic constructor 
//		     |---->|  5 |  		{
//		     	   |____|		 c=new int;
//		     	   			 *c=5;
//		     	   			}

#include<iostream>
using namespace std;

class A
{
	private:
		int a,b;
		int *p;
	public:
		void showData()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl<<"*p="<<*p<<endl<<endl;
		}

		A()
		{
			a=0;
			b=0;
			p=new int;	//this can also be written as 'p=new int(0);'
			*p=0;		//

		}
		A(int x,int y,int z)
		{
			a=x;
			b=y;
			p=new int;	//this can also be written as 'p=new int(z);'
			*p=z;		//
		}
};	

int main()
{	
	system("clear");

	A o1,o2(3,4,5);
	
	o1.showData();
	
	o2.showData();
}
