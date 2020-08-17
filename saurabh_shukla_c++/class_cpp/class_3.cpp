//state of an object-->collection of values of "instance member variables" of an object is known as its state

//if we make any change in "instance member variable" of an object, its state is said to be changed

//"instance member functions"of an object are collectively called behaviour of an object

//"instance member functions" also known as "methods","procedures","actions","opeations","services"

//"instance member variables" also known as "attributes","data members","fields","properties"

#include<iostream>
using namespace std; 
class complex
{	
	private:
		int a,b; //"instance member variable"-->these are called so bcauz they will be given memory when an object gets created
	public:
		void set_data(int,int);//<--function declaration of (instance member function)
		
		void show_data();//<--function declaration of (instance member function)

		complex add(complex);//<--function declaration of (instance member function)
		
};

void complex::set_data(int x,int y)
{
	a=x;
	b=y;
}

void complex::show_data()
{	
	cout<<endl<<a<<"+i"<<b<<endl;
}

complex complex::add(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return (temp);	
}


int main()
{	
	system("clear");
	complex c1,c2,c3; //c1 is an object of class complex

//	c1.a; //can't be accessed directly as "a" is a private member
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1.add(c2); 
	c3.show_data();
	getchar();
}

