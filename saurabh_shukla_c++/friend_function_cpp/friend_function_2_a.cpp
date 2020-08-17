#include<iostream>

using namespace std;
class Float;
class Integer
{
	private:
		int a;
	public:
		friend int sum(Integer,Float);

		void setData(int x)
		{
			a=x;
		}
};

class Float
{
	private:
		int b;
	public:
		friend int sum(Integer,Float);

		void setData(int y)
		{
			b=y;
		}
};

int sum(Integer I1 ,Float F1)
{
	int sum=I1.a+F1.b;
	return sum;
}

int main()
{
	Integer I;
	Float F;

	I.setData(2);
	F.setData(7);

	cout<<sum(I,F);
}
