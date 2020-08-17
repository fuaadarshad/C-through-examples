//EXCEPTION HANDLING
//
// C++ provides a built-in error handling mechnaism k/a exception hanadling using which we can manage and respond to runtime errors.
//
// we use three keyword "try","catch" & "throw" for exception handling
// 4:32
// syntax of writing the above
//
// try
// {
//
// }
// catch(type1 arg)	we can write as many catch blocks as we want but they must be written immediately after try block
// {			
//			all the catch blocks must be written sequentially and no other coding must be done between them
// }
//
// catch(type2 arg)
// {
//
// }
// ...
//
// catch(typeN arg)
// {
//
// }





#include<iostream>
using namespace std;

int main()
{
	cout<<"Welcome";
	try					//we can't write "try" & "catch" without one another
	{
		throw 10;		//here we are throwing 10 which is "int"
		cout<<endl<<"In Try";	//if the throw block would run, statement written next to it won't execute & vice-versa is also true
	}

	catch(int e) 			//and here let's say if we catch(double e) this would give an error <--only when writing one "catch()"
	{
		cout<<endl<<"Exception no: "<<e;
		cout<<"\nPlease try any other integer"<<endl;
	}

	catch(double e)
	{
	     cout<<endl<<"Exception no: "<<e; 		        // this catch block would not be even checked because the above catch
	     cout<<"\nPlease try any other value"<<endl;	// block has been executed for "throw 10;  
	}					  		// this means if one "catch block" matches with the "throw" the 
								// subsequent "catch blocks" would not be even checked	
	

	cout<<endl<<"Last Line";
	getchar();
}


//here we have written several blocks of catch because ,we want different actions to be performed when different values are thrown
