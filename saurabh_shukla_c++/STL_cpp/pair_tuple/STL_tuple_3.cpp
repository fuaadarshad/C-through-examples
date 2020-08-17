// In "pair" we can club two hetrogeneous data types(primitive or non-primitive),but in tuple we can pair multiple data types
//
//  Syntax of using Tuple
//
//"  tuple<string,int,float> t1; "


#include<iostream>
#include<tuple>
using namespace std;

int main()
{
	tuple<string,int,int> t1; //t1 is an object of tuple class which has three data types

// for assigning values in this object of tuple class
	t1=make_tuple("Fuaad",23,89);

// for accessing values in this object of tuple class
	cout<<get<0>(t1)<<endl; //first part of tuple (string)
	cout<<get<1>(t1)<<endl; //second part of tuple (int)
	cout<<get<2>(t1)<<endl; //third part of tuple (int)
}

//we can also compare two tuple class objects using relational operators
