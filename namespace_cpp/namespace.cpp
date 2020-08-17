//1) namespace is a container for declaration of identifiers(variables,functions or classes)
//
//   use of namespace?????
//   In each scope, a name can only represent one entity. So, there cannot be two variables with the same name in the same scope.
//   Using namespaces, we can create two variables or member functions having the same name.
//
//2) namespace puts the name of its members in a distinct space so that they don't conflict with the names in other namespaces or 
//   global namepace (https://www.geeksforgeeks.org/namespace-in-c/)
//
//3) namespace definition doesn't terminates with a semi-colon like in class definition
//
// namespace MySpace
// {
//  //declarations
//
// } <--no semicolon required
//
//4) namespace definition must be written, having global scope or nested inside another namespace. (having global scope)--> outside int main()  
//
//5) namespace is not a class, we can't create its objects
//
//6) we can use alias name for namespace, for ease of use
//
//	namespace MySpace
//	{
//		//declaration
//	}
//	namespace ms=MySpace;
//
//	int main()
//	{
//
//	}	
//
//7) there can be unnamed spaces too
//
//	namespace
//	{
//		//declaration
//	}	
//
//	int main()
//	{
//
//	}
//	___________________         ___________________   
//8)   |		   |       |	   	       |
//     |namespace MySpace  |       |namespace MySpace  |
//     |{		   |       |{		       |
//     | int a,b;	   |       | int x,y;	       |
//     | void f1();	   |       | void f2();	       |
//     |}		   |       |}		       |
//     |___________________|       |___________________|
//            file1.h                    file2.h 
//
//  A namespace definition can be continued and extended over multiple files,they are not redefined or overridden rather they are combined
//     
//

#include<iostream>
namespace MySpace
{
	int a; 		//variable declaration
	void f1();	//function declaration
	class A		//class declaration
	{
	 public:
		void fun1(); //declaration of function inside a class
	};
}

void MySpace::f1()	//this indicates that scope of f1() function is within MySpace or f1() is declared within MySpace
{
	std::cout<<"Hello f1"<<std::endl; //but cout & endl are also a member of namespace(std) then we need to include the header file which 
					//contains it i.e "iostream"
}

void MySpace::A::fun1() //fun1 is within scope of class A and class A is within scope of MySpace
{
	std::cout<<"Hello fun1"<<std::endl; 	 
}

int main()
{
//	a=5; this is wrong
	 
	MySpace::a=5; // if we wish to use any member declared in the scope of namespace(MySpace) then we need to use (::)scope resolution 
		      // operator for this
	MySpace::f1();
	
	MySpace::A obj;
	
	obj.fun1();

}

//instead of writing scope resolution opearator everytime when using a member of a "namespace", we could also write 
//"using namepsace NAME_OF_NAMESAPCE;"--> using namepsace std; (see next code) 
