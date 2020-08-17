//initializer list --> it is used to initialize data members of a class
//the list of members to be initialized with constructor as a comma seperated list followed by a colon


#include<iostream>
using namespace std;

class Funny
{
	private:
		int a,b;
		const int x; //const variables can only be initialized when they are created,but the problem is that we 
			     //can't initialize variables present in a class

		int &y;	//we have a similar case as above with "reference variable"
	public:
/*		Funny()
		{
		 a=5;  Initialaization could be done		//we can initialize "normal variables" like this but we can't initialize
		 b=6;  this way					//"const variables" like this
		}
*/		

/*   		Funny():a(5),b(6)
     		{									//but "const variables" can be initialized this way
     			Another way of doing initialization using initializer list
     		}	 ______catches a reference variable	
			/
*/		Funny(int &n):x(6),y(n)  
		{		//   |____reference variable that has been catched is passed here

		}

		
};

int main()
{
	int m=7;
//		 /-------variable "m" passed as reference
	Funny f1(m);
//	       \____object of class Funny		


}


//  when do we use initializer ??
//  there are situation when initialization of data members inside constructor can't be done and therefore list must be used:
// 1) for initialization of "const data members"
// 2) for initialization of "reference variables" 
