#include<iostream>
using namespace std;
class Complex
{
	private:
		int a,b;
	public:
		Complex(int x,int y) 	//"parametrized constructor"
					//formal arguments x & y
		{
			a=x;
			b=y;
		}

		Complex(int k)	//"parametrized constructor"
		{
			a=k;
		}

		Complex()	//"default constructor"
		{ }

//since we have more than one definition of constructor so we call it as "constructor overloading"		
};

int main()
{
	system("clear");
	Complex c1(3,4); //object is created and values 3 & 4 are passed in it(3->x->a(value 3 goes in x and then passed on to a),4->y->b )
	Complex c4=Complex(3,4);//same as above


	Complex c2(5); //for using this we must have a constructor that takes only one argument of "int" type --> line no.14
	Complex c5=Complex(5);//same as above
	Complex c6=5;//same as above
	 
	
	Complex c3; //if we call constructor without any argument and its constructor definition is not present it will throw an error
	getchar(); // this means for every constructor call, the definition should be present in class
}



//1)-->when we create an object a "default constructor" constructor gets called "implicitly" but it's non-parametrized constructor i.e it 
//deosn't accept any object with arguments
//2)-->but if we create any constructor on our own then even the "default non-parametrized constructor" won't be created "implicitly"
//3)-->the only purpose of creating parametrized constructors is to pass arguments while creating an object into it
