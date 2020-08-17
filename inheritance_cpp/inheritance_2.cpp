#include<iostream>
using namespace std;

class A
{
	private:
		int a;

	protected:
		void setData(int k)
		{
			a=k;
		}
};

class B: public A
{
	public:
/*		void setData(int x) //this is clearly wrong as we can't access private members of the parent class in the child class
		{
			a=x;
		}
*/
		void setValue(int y)
		{
			setData(y); //we can access protected member of parent class in child class
		}
};

int main()
{
	system("clear");
	B obj;
	obj.setValue(4); //using this we can set the value "4" in "a" which is a "private member variable" of class A using object of class B
//	(so we can say that we can indirectly access "private member variables" of "Parent Class") 
	getchar();
}
