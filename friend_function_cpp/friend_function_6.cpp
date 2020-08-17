#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{ ... }
		void foo()
		{ ... }
};

class B
{
	friend void fun(); //this doesn't mean that "fun()" function of class A is a friend of class B, but rather means that "fun()" function written below(not written withihn any class) is a friend function of class B, but if we want to make a friend function of "fun()" function in class A we need to write as in following line

	friend void A::fun();//here we have used a scope resolution"::" operator that tells clearly that function "fun()" used is of class A 
	friend void A::foo(); //similar as above,but if we wnat to make all member functions of a class,friend function in some other class 
			      //instead of writing scope "resolution operator" everytime we can write it as below
	friend class A: //this means "A" is "friend class" of class "B"

		
};		
			
void fun()	    	
{

}
