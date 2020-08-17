// basic_string(base class)-->string(derived class)
// string s1; where "string" is class and "s1" is object of that class
//



#include<iostream>
#include<string.h> //for string operations and function available in C like( strcpy(),strcat(),strcmp() )
#include<string>  //for string operations and functions present under the "string" class
using namespace std;

int main()
{			   //   ___ ___ ___ ___ ___ ___ ___ ___ ___ ___ 
    char s[10]="Hello";    //  | H | E | L | L | O |\0 | G | R | E | N | <--we use this method of accessing strings when "speed" is a concern.
			   //  |___|___|___|___|___|___|___|___|___|___|  but using "string class" we can reduce the complexity of operations
        		   //    0   1   2   3   4   5   6   7   8   9	  and make the operations and program less error prone and safe  

// string class supports many constructors some of them are
// -->string()
// -->string(const char* str) 

 	string s1;   
	s1="Hello"; //here constructor won't be called but assignment operator defined in the "string class" is called

 	string s2="Hello"; //string s2("Hello"); or string s2=string("Hello"); here the constructor will be called and "Hello" is 
	//passed as argument in it
	
	
	char str[]="Hello";
	string s3=str;  //string s3(str) //string "str" gets copied into string "s3"

	
}
