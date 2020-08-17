#include<iostream>
using namespace std; 
class complex
{	
	private:
		int a,b;
	public:
		void set_data(int x,int y)//member functions can directly access any member of its class(like below "a" and "b")
		{			  //we can define member functions even outside the class
			a=x;
		       	b=y;
		}
		void show_data()
		{
			cout<<endl<<"a="<<a<<"  "<<"b="<<b<<endl;
		}
};

int main()
{	
	system("clear");
	complex c1; //c1 is an object of class complex

//	c1.a; //can't be accessed directly as "a" is a private member
	c1.set_data(3,4);
	c1.show_data();
	getchar();
}

