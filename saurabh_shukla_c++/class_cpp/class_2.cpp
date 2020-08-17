
					 //we can define member functions even outside the class
		       			  //For this there are two conditions:
					  //1)Function has to be declared inside the class
					  //2)The definition outside must have a "membership label" between "return type" and "function name"
					  //"membership	label"-->"complex(class_name)"+"::(scope resolution operator)"
					  //"void complex::set_data(int x,int y) 	
					  
	//When we define a function inside a class it is by default inline, otherwise when defined outside the class it has to be specified 
	//using the "inline" keyword during the declaration.

#include<iostream>
using namespace std; 
class complex
{	
	private:
		int a,b;
	public:
		void set_data(int,int);//<--function declaration
		
		void show_data();//<--function declaration
};

void complex::set_data(int x,int y)
{
	a=x;
	b=y;
}

void complex::show_data()
{	
	cout<<endl<<"a="<<a<<"  "<<"b="<<b<<endl;
}

int main()
{	
	system("clear");
	complex c1; //c1 is an object of class complex

//	c1.a; //can't be accessed directly as "a" is a private member
	c1.set_data(3,4);
	c1.show_data();
	getchar();
}

