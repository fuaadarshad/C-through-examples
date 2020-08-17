//Overloading of Insertion and Extraction operator 

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
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}

		friend ostream& operator<<(ostream&,Complex);

		friend istream& operator>>(istream&,Complex&);
};

ostream& operator<<(ostream &dout,Complex c) //When an object is passed locally, class instances(objects) are always returned by reference. 
					     //Thus, only a reference to an object is returned, not the object itself--> ostream &dout
{
	cout<<"a+ib="<<c.a<<"+i"<<c.b<<endl;
	return dout; //we have written "return dout" so that cascading can be done "cout<<c1<<c2;"
}

istream& operator>>(istream &din,Complex &c)
{
	cin>>c.a>>c.b;
	return din;
}

int main()
{
	system("clear");
	Complex c1,c2;
	cout<<"Enter a complex number"<<endl;
	cin>>c1; //cin.operator>>(c1)
	//cin is the object of the class in which ">>" operator is defined 
	
	cout<<c1; //operator<<(cout,c1);
	//let's suppose if we would have written "cout<<c1<<c2;" above then then once "cout<<c1" gets executed for the second part of above
	//to get executed there need to be something on the left of "c2" that operates the same way as "cout" so we would take the return 
	//type of " operator <<"(line no.22) to be the "reference of ostream class" of which "cout" is an object
	getchar();
} 

