#include<iostream>
using namespace std;
namespace MySpace
{
	int a;
	void f1();
	class Hello
	{
		public:
			void hello()
			{
				cout<<"Hello"<<endl ;
			}
	};
}

using namespace MySpace;
void MySpace::f1()
{
	cout<<"in f1()"<<endl;
}
int main()
{
	a=5;
	Hello obj;
	obj.hello();
	f1();
}

