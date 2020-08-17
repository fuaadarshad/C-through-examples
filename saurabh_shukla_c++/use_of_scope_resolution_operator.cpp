#include<iostream>

using namespace std;

int x=3;
int main()
{

	int x=7;

	cout<<"x="<<x; //whenever the compiler sees a variable in cout it looks for it locally but if it doesn't finds it locally 
		       //then it looks for it globally

	 //but if we want to print the global variable with the same name as that of a local variable present in the program
	 //
	cout<<"x="<<::x; //scope resolution operator used for accessing global variable
	

}
