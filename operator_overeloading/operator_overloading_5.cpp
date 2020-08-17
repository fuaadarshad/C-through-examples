#include<iostream>
using namespace std;

class Integer
{
	private:
		int x;
	
	public:
		void setData(int a)
		{
			x=a;
		}

		void showData()
		{
			cout<<"x="<<x<<endl;
		}

		Integer operator--() //post-increment(what we assume)  //pre-increment(what compiler thinks)
		{
			Integer i;
			i.x=x--;
			return i;
		}

		Integer operator--(int) //pre-increment(what we assume)   //pre-increment(what compiler thinks)
		{
			Integer i;
			i.x=--x;
			return i;
		}

};

int main()
{
	Integer i1,i2,i3;
	i1.setData(9);
	i1.showData();//9
	i2=i1--;
	              //output should have been below		//but it happens to be this
	i1.showData();//8 					//8 
	i2.showData();//9 					//8
	i3=--i1;
	i1.showData();//7 					//7
	i3.showData();//7 					//8

	//the unexpected output is because the first one i.e the one without "int" is always thought to be pre-increment by the compiler and 
	//the second one with "int" as argument is thought to be post-increment by the compiler
}
