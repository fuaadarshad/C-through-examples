#include<iostream>

using namespace std;

class Complex
{
	private:
		int a,b;

	public:
		Complex(int x,int y)
		{
			a=x;
			b=y;
		}

		Complex()
		{}

		Complex operator*(Complex c)
		{
			Complex temp;
			temp.a=(a*c.a)-(b*c.b);
			temp.b=(b*c.a)+(a*c.b);

			return temp;
		}

		void show_data()
		{
			cout<<"a+ib="<<a<<"+i"<<b<<endl;
		}
};


int main()
{

	Complex c1(1,2),c2(3,4),c3;
	c3=c1*c2;
	c3.show_data();

}
