//pure virtual function --> a do nothing function is called a pure virtual function

#include<iostream>
usinng namespace std;

class Person
{
	public:
		virtual	void fun()=0; //this syntax tells the compiler that it's a "do nothing" or "pure virtual" function 
			      //object of any class having "pure virtual" function can't be created
			      //any function other than "pure virtual" function of such a class can only be accessed using its child class
		
		void f1()
		{

		}
};

class Student: public Person
{
	public:
		void fun()	//child class of a class having "pure virtual" function must have a function with same prototype as "pure" 
		{		//function and must contain a body
		
		}		//still there was a chanace that using the pointer of class A we could call "pure virtual" function but
				//that has been retsricted by use of "virtual" keyword(that performs its late binding) in front of 
				//the "pure virtual" function
}


//so what's "abstract class"??
//any class that has even a single "pure virtual" function is known as "abstract class"
//
//after 12:05 see video (abstract class)
