//destrcutor is created to release the resources(m/m) of objects and to perform every task that must be done before the object gets destroyed

#include<iostream>
using namespace std;

class A
{	private:
		int a;
	public:
		A(int x)
		{
			a=x;
		}
		~A() //destructor of class A
		{

			//we can write here the tasks to be performed before object of "class A" is destroyed
		}

};
			
class B: public A
{		
	private:
		int b;
	public:	
		B():A(5) 
		{       
		
		}
		
		B(int x,int y):A(x) 
		{		    
			b=y;
		}
		
		~B() //destructor of class B
		{
			//we can write here the tasks to be performed before object of "class B" is destroyed
		}
		//order of destructor being invoked--> B > A
		//order of destructor being executed--> B > A
		
		//even if we don't create destructor the above steps would be executed implicitly

};

int main()
{	       
	B obj;

	B obj1(2,3);
}
