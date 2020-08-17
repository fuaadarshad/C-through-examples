//"base class" pointer can point to the object of any of its descendant class

//but any "derived"/child/descendant class pointer can't point to its base/parent class


#include<iostream>
using namespace std;

class A
{
	public:
	virtual void f1()
		 {
			//code1
		 }

};

class B:public A
{
	public:
		void f1() //function over-riding
		{
			//code2
		}

};

int main()
{
	A *p,o1;
	B o2;
//	p=&o1; or p=&o2; --> p being the pointer of parent/base class can point to or contain address of "class A" or "class B"
	p=&o2;

	o2.f1(); //this will call f1() function in child class(B)
        //for early binding "type of object"(class) is seen when using object for function call 

	p->f1();
	//for early binding "type of pointer" is seen when using pointer for function call since we can't make out the content 
	//of the pointer at that point of time,so in this case the f1() of "class A" will be bound with this call 
	//but we wanted the definition of "class B" to execute for this call and that's why we made the pointer point to object of "class B"
	
	//we can solve the above problem by delaying the binding or causing the "late binding" by writing "virtual" keyword in front of
	//function in the parent class in line no.12 .Through "late binding" function call being bound is determined at the run time when 
	//content of the pointer is known ,not just the type of pointer. So here this call would execute f1() of "class B"
	//
	// *** if function f1() is present in any descendant class of A and keyword "virtual" is written with f1() in class A then it would
	//be considered as virtual function
	
}
