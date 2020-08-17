//"using" keyword allows us to import an entire namespace into our program with a global scope


#include<iostream>
using namespace std; // now we no longer need to use "std::"

namespace MySpace
{
        int a;          //variable declaration
        void f1();      //function declaration
        class A         //class declaration
        {
         public:
                void fun1(); //declaration of function inside a class
        };
}
using namespace MySpace;

void MySpace::f1()      // MySpace::f1() can't be removed while defining but can be removed while using it
{
        cout<<"Hello f1"<<endl;  //std::cout & std::endl removed
                                        
}

void MySpace::A::fun1() // MySpace::A::fun1() can't be removed while defining but can be removed while using it  
{
        cout<<"Hello fun1"<<endl; //std::cout & std::endl removed
}

int main()
{
        a=5; // MySpace::a removed 
                     
        f1();// MySpace::f1() removed 

        A obj;// MySpace::A removed 

        obj.fun1();

}


//"using" keyword can be used to import a namepsce into another namespace or program
//
//
//    __________________     ___________________________
//   |			|   |#include"file1.h"          |      
//   | namespace MySpace|   | namespace MyNewSpace      |
//   | {		|   | {		                |
//   |  int a,b;	|   |  using namespace MySpace  |
//   |  class A		|   |  int x,y;		   	|
//   |  {		|   |  A obj;	   	   	|
//   |   //code		|   | } 		   	|
//   |  };		|   |  			   	|
//   | }		|   | 			   	|
//   |__________________|   |___________________________|
//      file1.h			file2.h
//
// (see next) 
