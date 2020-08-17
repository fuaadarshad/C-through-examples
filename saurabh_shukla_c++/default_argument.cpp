//default arguments

#include<iostream>

using namespace std;

int add(int,int=0,int=0);//the last int is assigned zero which means if the last integer is not assigned any value by the user it would be     considered 0 automatically or any other number given as default argument

//if we wish to set any argument as default argument then all the arguments coming after it will also have to be set as default argument
//for eg: "int add(int,int=0,int)"-->wrong "int add(int,int=1,int=2)"-->correct  here we have two arguments set as default argument

int a,b,c;

int main()
{
//	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"Enter three numbers"<<endl;
//	cin>>a>>b>>c;
	cout<<"sum of three nums:"<<add(a,b,c); 
	cout<<"sum of two nums:"<<add(a,b);
}

int add(int x,int y,int z)//if two values are passed by user 1st value-->goes to 'a'  2nd value-->goes to 'b' 3rd value-->goes to 'c',  
{  			  //if 3rd value is not given by user then zero goes in it which is default value	
return(x+y+z);
}

