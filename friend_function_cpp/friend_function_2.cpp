#include<iostream>
using namespace std;

class B;	//declaration of class B // we have done declaration so that friend function used in class A  doesn't gives any error
class A
{
	private:
 		int a;
	//friend function can be declared under any "access specifier"-->"public"/"private"/"protected"  it doesn't makes any difference
		friend void fun(A,B);
	public:
		void setData(int x)
		{
			 a=x;
		}	
		
};

class B
{
	private:
		int b;
	public:

		friend void fun(A,B);
		
		void setData(int x)
		{
			 b=x;
		}

};

void fun(A o1,B o2) //just like--> void fun(Complex c1,Complex c2) Complex-->(class) c1,c2-->(objects of class) 
		    //void fun(A o1,B o2) A & B -->(class) o1 & o2-->(objects of class A & B)
{
 cout<<"sum is ="<<o1.a+o2.b<<endl;//here we are able to access "private data" of more than one "class" using friend function("ADVANTAGE 1")
 					
 //this can only be done with the help "friend function",if we would have used the member function of a class then we'd have been only able to use "private data" of that particular class
}

int main()
{
	system("clear");
	A obj1;
	B obj2;
	obj1.setData(5);
	obj2.setData(7);
	fun(obj1,obj2);
	getchar();
}


