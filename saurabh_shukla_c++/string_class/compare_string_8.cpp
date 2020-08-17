#include<iostream>
#include<string>
using namespace std;

int main()
{	
	system("clear");
	string s1="Amar";
	string s2="Amit";     // output      s1     s2
	int i=s1.compare(s1); //   0        Amar   Amar
	int j=s1.compare(s2); //  -1	    Amar   Amit   //ascii value of "a"<"i" (-ve) 
	int k=s2.compare(s1); //   1	    Amit   Amar   //ascii value of "i">"a" (+ve) 
	cout<<"i="<<i<<endl;  
	cout<<"j="<<j<<endl;   
	cout<<"k="<<k<<endl;   
	getchar();	     
       			     
}
