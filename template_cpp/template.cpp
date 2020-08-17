//The keyword template is used to define  "template function" and "template class"
//It is a way of making generalized "function" or "class"

#include<iostream>
using namespace std;

int big(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}

double big(double a,double b)
{
	if(a>b)
		return a;
	else 
		return b;
}

int main()
{
 cout<<"int "<<big(4,5)<<endl; //the above function would work for integers only 
 cout<<"float "<<big(5.6,3.4); //for this we need to write another function in which everything remains the same but "int" gets replaced by
       			       //"double"-->is there any way out through which we need not write another function?? 
			       //Yes,we can do the same by using "template function"
}

