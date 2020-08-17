//Overloading of "binary" operator as a friend function


#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}

		void showData()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}

	 friend Complex operator+(Complex,Complex); //declaration of friend function
};


	Complex operator+(Complex c1,Complex c2)  //definition of friend function
	{
		Complex temp;
		temp.a=c1.a+c2.a;
		temp.b=c1.b+c2.b;
		return temp;
	} 

int main()
{
	system("clear");
	Complex c1,c2,c3;
	c1.setData(3,4);
	c2.setData(5,7);
	c3=c1+c2; // "+" operator is called and "c1 & c2" are passed as argument and value returned is stored in c3 ** c3=operator+(c1,c2)**
	c3.showData();
	getchar();
}

//whenever we are overloading a binary operator using a member function we will pass only one argument

//but whenever we are overloading a binary operator using a friend function we will pass two arguments

//we can generally say that whenever we are overloading a "binary" or a "unary" operator with the help of a "friend function" we would need 
//one more argument as compared to when using a "member function"
