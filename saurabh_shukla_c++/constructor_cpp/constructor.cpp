//1) constructor is a member function of the class
//
//2) the name of the constructor is same as the name of the class
//
//3) it has no return type,so we can't use return keyword 
//
//4) it must be an "instance member function(created for an object)",and can never be "static(static member function)"


//constrctor is implicitly invoked when an object is created
//
//constructor is used to solve the problem of initialisation-->now question is what is problem of initialization
//let's assume we have a class "car" whose object when created represents a "physical entity"-->but the variables of the class are initialized to some garbage value, so we can't say that it actually represents some "real car"-->this is the problem of initialization
//so how does constructor solve this problem???
//constructor gets called immediately after the object is created
//so whatever task has to be carried out immediately after the creation of object is written in the body of constructor for eg;"initialization of member variables"  
//now whenever an object is created it represents a particular car let's say("SWIFT DZIRE")

//if we don't write the return type of any function it would be considered as "int"-->???
//
//
#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
/*no return type*/Complex()  //constructor(function) with no return type rule no.3 / "constructor name" same as "class name"/	
{
	cout<<"constructor runs only after object is creted"<<endl;
}  				 //body of constructor
//constructor will be called as many times as the number of objects created (c1,c2,c3)-->three times					
				
};

int main()
{
	system("clear");
	Complex c1,c2,c3;
	getchar();
}
