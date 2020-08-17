//function overloading ,function overriding and function hiding

#include<iostream>
using namespace std;

class A
{
	public:
		void f1()
		{
			//code1
		}

		void f2()
		{

		}
};

class B:public A
{
	
	public:
	void f1() 	//same name, return type and argument of function in child as in parent class but a different "code"
	{	  	//then it is known as function/method over-riding
	   //code2
	}

	void f2(int x)	//same name and return type of function in child as in parent class but a different "argument"
	{		//then it is known as function/method hiding

	}
};


int main()
{
	B obj;
	obj.f1();  //Compiler decides which version of "f1()" function will be called and that version definition is bound with this call 
		   //and this is known as early-binding	
	
	//what actually happens-->
	//compiler checks the "type of object"(class) calling a function and if the definition of that function exists in that particular 
	//class it would take its definition from there else it would look for the definition in the "parent class" and takes it from there
	//
	//in our example since the definition of f1() being called by obj(object) of class B and definition of f1() is present in the class B
	//COMPILER would bind its definition to the call
	
//	obj.f2(); //since the function f2() definition is present in class B even though the argument doesn't matches then also the function
    	//call would be bound with that definition only 
	//->if we run this it would give an "ERROR" because he haven't passed any argument
	 
	obj.f2(4); //--> this would't give any "ERROR" since we are passing the argument 

//	"Difference between function "overloadiing" and function "hiding"
//
//	if we write all the definitions(with different arguments) of the same function in the same scope i.e. same class then it is k/a 
//	function-overloading
//
//	if we write all the definitions(with different arguments) of the same function in the different scope i.e. different class then
//	 it is k/a function-hiding

}
