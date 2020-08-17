#include<iostream>
using namespace std;

class Array
{
	private:
		int a[10];

	public:
		void insert(int index, int value)
		{
			a[index]=value;
		}
};

class STACK: private Array			//	 ____
{						//	|____|3
	int top;				//	|____|2	
	public:					//	|____|1		
		void push(int value) 		//	|____|0   in a stack we'd always want that block having smaller index gets filled up
		       				//	first ,but if we place "insert()" function in "public" in class "Array" it will be  
		{				//	inherited as "public member" of class "STACK" and could be used directly by object 
						//	of class "STACK" and this would lead to undesired random filling in Stack	
			insert(top,value);      //      for eg:  s1.insert(3,67) --> even if other blocks are empty the 3rd block would 
		}				//	get filled up first, so we need to inherit class "Array" in "private" 
						//	visibility-mode,so that it can't be directly used but only through "push()" function
						//	in "STACK" class
};						//	for eg: s1.push(35)-->insert(top,35)-->a[top]=35

int main()
{
	STACK s1;
	s1.push(35);

}	
