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

	//	void fun(Complex c); -->this is a member function but if we add friend keyword in front of this it becomes friend function
	
		friend void fun(Complex c);  //"friend function" can only be used if it has been declared inside the class

	//we can also say that the person who has written the class doesn't want to give access of "private members" of the class to 
	//others(friend function) he will not declare it inside the class
};

//1)--friend function must be defined outside the class

//2)--friend function can access any member of the class to which it is a friend

//3)--membership label is not used while defining friend function as it was required for defininig member function outside the class

void fun(Complex c)
{
// cout<<"sum is="<<a+b; //this is also wrong because friend function can't access class members directly but can access them indirectly
//
// but why so???
//
// since the compiler doesn't know member(instance member variable) of which object is being acccessed--> i.e "a" & "b" used are of object c1 or c2

	cout<<"sum is="<<c.a+c.b<<endl;	//here we have indirectly accessed the class members using "class objects"
}


int main()
{
	system("clear");
	Complex c1,c2,c3;
	c1.setData(2,3);
//	c1.fun();  --> it would be wrong to call friend function using a class object
    fun(c1);   //this is how we would call friend function--we are passing argument so it could be known member of which object is being used 
	getchar();
}

