//1)-->"destructor" is an "instance member function" of a class
//2)-->name of the destructor is same as the name of the class but preceded by (~)tilde sign
//3)-->destrcutors can never be "static"
//4)-->destructor has "no return type"
//5)-->destructor takes "no arguments"-->no overloading possible


#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
	/*	static ~Complex()  //-->this will give an error see pt.3
		{ }	
	*/

	
	// if we don't create a "destructor" then compiler will do that on its own otherwise it won't
		~Complex()  
		{ cout<<"destructor";}
	//"destructor" is invoked when object is to be destroyed
	//it doesn't acatually destroy the object, but it is the "last function" to execute before the object is destroyed
	//just like a "variable" the "object" will be destroyed once the function in which it is written comes to an end.
	//*** It should be defined to release resources(freeing resources) allocated to an object(dynamic allocation of m/m)
};

void fun()
{
	Complex obj;
}
int main()
{

	system("clear");
	fun();
	getchar();
}
