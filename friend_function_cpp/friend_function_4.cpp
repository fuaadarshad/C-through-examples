//overloading of a "unary" operator as a friend function

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

		friend Complex operator-(Complex);
};
	
	Complex operator-(Complex c)
	{
		Complex temp;
		temp.a=-c.a;
		temp.b=-c.b;
		return temp;
	}

int main()
{
	system("clear");
	Complex c1,c2;
	c1.setData(3,4);
	c1.showData();
	c2=-c1; //"-" operator is called which takes "c1" as argument and returns the value to c2 ** c2=operator-(c1) **
	c2.showData();
	getchar();
}
