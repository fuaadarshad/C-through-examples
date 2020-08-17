#include<iostream>
using namespace std;

// template<class type,class type1,...> 	--> type,type1,.. are data types

template <class X,class Y> //we can put more than one placeholder in case we want to use two different "variables" in a "function"
X big(X a,Y b) //so here we would replace "int"/"float"/.. with "X" and same for "Y"
{
	if(a>b)
		return a;
	else 
		return b;
}


int main()
{
 system("clear");
 cout<<big(5.6,5)<<endl;  //the compiler will by itself understand whether the value being compared is "int"/"double"/.. during "compile time"
 cout<<big(5.6,'C');	  //												"early binding" <-/
 getchar();
}

