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

		Complex(Complex &c)  //"copy constructor"
				     // we need to pass reference variable in the formal argument for a "copy constructor"
		{
			a=c.a;		//this->a=c->a
			b=c.b;		//this->b=c->b
		}
};

		

int main()
{
	system("clear");
	Complex c1(3,4),c2,c3(5);
	
	Complex c4(c1); //which constructor should be called for this???-->ans. is none of the above written constructors
	Complex c5=c1; //same as above **Note that c5 should be initialized to c1 at the time of declaration itself
	
	//c5=c1; //this is wrong 

	//if there are no cocnstructors in the class then compiler will make two constructors
	//a)->"default constructor"
	//b)->"copy constructor"
	
	//if we have created some constructor in the class which is not a "copy constructor" then compiler will not make "default constructor"  	but will create "copy constructor"
	
	//if we have created "copy constructor" in the class then compiler will not make any constructor(default or copy)
	
	//whenever we create an object and pass the object of same class in it then copy constructor is called

	// this means for every constructor call, the definition should be present in class
	
	getchar(); 
}

