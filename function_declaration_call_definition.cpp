#include<iostream>
using namespace std;
void sunny(); //global declaration of function sunny()    function declaration is also known as function prototype
int main()
{
 cout<<"MAIN"<<endl;
 void fun(); //local declaration of function fun()-> function call can only be made within the functcion and not outside in any other function 
 fun();
 sunny(); 
}
	void fun()
	{
		cout<<"FUN"<<endl;
	}
	
	void sunny()
	{
		cout<<"SUNNY"<<endl;
		fun();
	}

