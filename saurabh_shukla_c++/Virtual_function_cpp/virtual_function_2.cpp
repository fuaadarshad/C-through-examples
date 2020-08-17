//while reading this code see image related to this side by side and if reqd. refer to video of virtual functions part-2 (saurabh shukla)


#include<iostream>
using namespace std;


				//in whichever class there is a virtual function,compiler will itself create a variable in that class( *vptr)

				//it is not created individually for descendant classes but it gets inherited by them.
				
class A				//since it is an "instance member variable" so its creation depends on objects being created

{				//we can be assured of its existence by applying "sizeof" operator on that very class object which has 
				//a virtual function-->sizeof(object) gives "8 extra bytes"(which is sizeof(vptr))  
	public:
	
	int x,y;	//a static array of pointers(function pointers) k/a "vtable"is created for all classes having virtual functions
		//"vtable" is also created individually for all descendant classes which have inherited a class containinig virtual functions		      	      //since it's an "static" array it doesn't depends on "object" creation 
	void f1()
	{			//when object of class A is created "vptr" contains address of "vtable" created for class A
				//similarly when object of class B is created "vptr" contains address of "vtable" created for class B
	}
	virtual void f2()
	{

	}
	virtual void f3()
	{

	}
	virtual void f4()
	{

	}

};

class B:public A
{
	public:


		void f1()
		{

		}
		void f2()
		{

		}
		void f4(int x)
		{

		}
}; 

int main()
{	
	system("clear");
	A obj;
	B obj1;
	cout<<sizeof(obj)<<endl; //x->4 bytes,y->4 bytes & vptr->8 bytes //TOTAL->16
	cout<<sizeof(obj1)<<endl;//x->4 bytes,y->4 bytes & vptr->8 bytes (since class B inherits class A) //TOTAL->16
	getchar();
}

 
