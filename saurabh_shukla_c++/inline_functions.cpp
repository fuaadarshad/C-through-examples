#include<iostream>
using namespace std;

//memory gets allocated for a function in ram whenever it is called or function call is made,but this process takes some time which involves jumping to functions,saving rgeisters for previous content(code+data) which was being executed, pushing arguments into stack and returning from function call->these are known as overheads

//we can save this time by replacing function definitions with inline function calls, during the compile time,this would save time(overheads)

inline void fun(); //inline keyword is required to be written during function declaration,not during definition or call

int main()
{
	cout<<"You are in main"<<endl;
	fun();
}
	void fun()
	{
		cout<<"You are in fun"<<endl;
	}	
 

