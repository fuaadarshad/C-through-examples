#include<iostream>
using namespace std;

class Dummy
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

		Dummy(Dummy &other)
		{
			this->a=other.a;
			this->b=other.b;
		}
};

int main()
{					//	Creating copy of object by copying data of all member variables as it is --> Shallow Copy
	system("clear");		//	 ________________    ________________
	Dummy d1;			//	|  ____   ____   |  |  ____   ____   |
	d1.setData(2,3);		//	| |  3 | | 4  |	 |  | |  3 | | 4  |  |
	Dummy d2=d1;//copy constructor	//	| |____| |____|	 |  | |____| |____|  |
					//	|   a	   b	 |  |   a      b     |
					//	|________________|  |________________|
					//		d1	|      ----> d2
					//			|______|
	//Dummy d2;
	//d2=d1	    //Implicit copy assignment operator
	//
	//Copy constructor and Implicit copy assignment operator are used for Shallow Copy
