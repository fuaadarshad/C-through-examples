// unary operator overloading

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
		cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	}
	
	Complex operator -()
	{
		Complex temp;
		temp.a=-a;
		temp.b=-b;
		return temp;
	}
		
};

int main()
{
	system("clear");
	Complex c1,c2;
	c1.setData(3,4);
	c2=c1.operator -();  //c1 calls "-" opearator and no argument is passed and value returned is assigned to c2
	c2=-c1;		     //above can also be written like this
	c2.showData();
	getchar();
}

