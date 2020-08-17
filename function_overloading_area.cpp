#include<iostream>
using namespace std;

#define PI 3.14
int area(float,char); //3rd rule applied

float area(float);

int main()
{
	float radius;
	cout<<"Enter radius of circle"<<endl;
	cin>>radius;
	float A1=area(radius);
       
	//compiler does the job of binding the function call with the function definition based on 3 rules:
	//1)->Exact Match -- The function names should be same and arguments passed should be different,either their number or their types or 		both. The return type hasn't got any role in this.If this one fails then second one is checked
	//2)->The arguments passed are promoted and then if it matches the functions provided then binding is done					"char,unsigned char and short" is promoted to "int"	"float" is promoted to "double"
	//3)Any primitive type can get converted into any other primitive type for eg;"int"->"char","char"->"float","float"->"int"	
	
	//This binding takes place at compile time only and therefore known as early binding


	cout<<"Area of circle is"<<endl<<A1<<endl;
	int length,breadth,A2;
	cout<<"Enter length and breadth"<<endl;
	cin>>length>>breadth;
	A2=area(length,breadth);
	cout<<"Area of rectangle is"<<endl<<A2<<endl;
}

float area(float r)
{
	float A1;
	A1=PI*r*r;
	return A1;
}

int area(float l,char b)
{
	int A2;
	A2=l*b;
	return A2;
}
