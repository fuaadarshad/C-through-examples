// class type to primitive type 

#include<iostream>
using namespace std;

class Complex
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}

		void showData()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}

		operator int() //class type to primitive type can be implemented with "casting operator"    "int"--> primitive type(x)  
		{		//	 _______________
		      return(a);// _____/		|
		}		//            		|
				//			|
};				//			|
				//			|	
int main()			//			|
{				//			|
	system("clear");	//			|
	Complex c1;		//			|
	c1.setData(3,4);	//			|
	c1.showData();		//			|				
	int x; 		// "int"--> primitive type(x)   |         
	x=c1;		// c1.a will be put in x <-------	c1 will call casting operator and whatever is returned by casting operator 
							//	gets stored in x		
	cout<<"x="<<x<<endl;
	getchar();
}


