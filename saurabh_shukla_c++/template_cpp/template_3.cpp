#include<iostream>
using namespace std;

template <class X> //"templpate" & "class" are keywords that will remaian as it is but "X" is a placeholder that can contain any "int","float" or any other variable
X big(X a,X b) //so here we would replace "int"/"float"/.. with "X"
{
	if(a>b)
		return a;
	else 
		return b;
}


int main()
{
 system("clear");
 cout<<"int "<<big(4,5)<<endl;  //the compiler will by itself understand whether the value being compared is "int"/"double"
 cout<<"float "<<big(5.6,3.4);
 getchar();
}

