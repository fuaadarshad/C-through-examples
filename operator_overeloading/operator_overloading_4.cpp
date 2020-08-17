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

	Integer operator++()  //for pre-increment
	{
		Integer i;
		i.x=++x;
		return i;
	}
	
	Integer operator++(int) //for post-increment
	{		      //we have passed "int" as argument so that the compiler can differentiate between post-increment & pre-increment
		Integer i;
		i.x=x++;
		return i;
	}
};

int main()
{
	system("clear");
	Integer i1,i2,i3;
	i1.setData(3);
	i1.showData();  //3
	i2=++i1;	//pre-increment
	i1.showData();  //4
	i2.showData();  //4
	i3=i1++;	//post-increment	
	i1.showData();  //5
	i3.showData();  //4
	getchar();
} 


