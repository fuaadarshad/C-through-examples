//We know that constructor is invoked implicitly when an object is created

//In inheritance, when we create object of derived class what will happen -->constructor of "base class" created or "derived class" creted 
//or constructor of both are created ???

//whenever object of child class is created m/m is allocated for
//--> members of child class
//--> properties of parent class

//job of constructor
//-->initialisation of object (member variables of class)   	[]--> this shows order of reading in later part


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

};
			//[2]
class B: public A	//if we don't write any constructor in a class, default/non-parametrized constructor will be invoked
{		//and if this is a derived class "default" constructor of this class will only call "default" constructor of the base class
	private:
		int b;
	public:		 //[3]
		B():A(5) //if we write default constructor, it won't be created by default and needs to created and constructor of the parent
		{        //class also needs to be invoked which was previously done implicitly
		
		}
		//[4]
		//what if we just write the constructor of child class and not of the parent class like above
		//eg: B() -->then default constructor of the child class will be created and it will invoke the deafult 
		//    { }    constructor of the parent class
		
		B(int x,int y):A(x)  //this way we can use constructor of class B to invoke parametrized constructor of class A
		{		     //and access "private member variable" of parent class 
			b=y;
		}


};

int main()
{	       //[1]
	B obj; //constructor of that class will only be invoked whose object is created

	       //but if we create an object of a derived class it will invoke its own constructor and this constructor will 
	       //invoke the constructor of the parent or base class,so the control gets transferred to the constructor of base class
	       //which will be executed first followed by constructor of child class
	       //So we finally say that order in which constructor gets called --> child > parent
	       //order in which constructor gets executed --> parent > child
	       //
	       //what if even "class A" had a parent class,let's say "class C"??
	       //if object of "class B" is created,
	       //order of constructor being called --> "B">"A">"C"
               //order of constructor being executed --> "C">"A">"B"

	B obj1(2,3);
}
