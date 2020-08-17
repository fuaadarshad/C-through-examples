// "+" is a binary operator
// here we would see binary operator overloading

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
		cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	}
	
/*"	Complex add(Complex c)
	{
		Complex temp;
		temp.a=a+c.a; 
		temp.b=b+c.b;
		return temp;
	}
*/	
	//can we change the name of "add" function to "sum"?? -->ans. yes, we can but it will have to be replaced at all the places in the entire program
	//can we change the name of "add" function to "+"?? -->ans. no,we can't do that directly but there is a way out  
	//if we want to write an operator as a function name then we need to add "operator" keyword before it. eg--> "operator +" 
	
	Complex operator +(Complex c)
	{
		Complex temp;
		temp.a=a+c.a; 
		temp.b=b+c.b;
		return temp;
	}
};

int main()
{
	system("clear");
	Complex c1,c2,c3;
	c1.setData(3,4);
	c2.setData(5,6);
//"	c3=c1.add(c2);
	c3=c1.operator+(c2); //does the same job as above when add function replaced by "operator +" 
	c3=c1+c2; 	     //same as above(we can remove ".operator") 
	//here c1 calls "+" function in which "c2" is passed as argument and "+" function returns the value that gets stored in "c3"
	
	//so now "+" has two definitions
	
	//when an operator is overloaded with multiple jobs, it is known as operator overloading
	
	//it is a way to implement "compile time polymorphism" 
	
	c3.showData();
	getchar();
}


//any symbol can be used as function name 
//-->if it is a valid "operator" in C language
//-->if it is preceded by "operator" keyword
//-->we can't overload "sizeof" and "?:"(conditional) operator
