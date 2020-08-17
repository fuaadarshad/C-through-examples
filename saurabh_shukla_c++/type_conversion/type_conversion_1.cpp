//primitive type to class type

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
			cout<<"a+ib="<<a<<"+i"<<b<<endl;
		}

		Complex() //this constructor will be called when object c1 is created
		{}	  

		Complex(int k) //this constructor is called when we assign x in c1 --> (c1=x;)
		{
			a=k;
			b=0;
		}
};

int main()
{
	system("clear");
	Complex c1;
	int x=5;
	c1=x;
	c1.showData();
	getchar();
}


