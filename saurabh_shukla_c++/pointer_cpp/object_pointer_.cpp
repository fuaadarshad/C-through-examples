//  POINTER

//  int *x; //x is a pointer that stores the address of an integer
//  so a pointer stores the address of a variable of its own type

//  "Object Pointer"

//  Going by above definition, an "object pointer" contains the address of an "object"


#include<iostream>
using namespace std;

class Box
{
	private:
		int l,b,h; //instance member variable 
	public:
		void setDimension(int x,int y,int z) //instance member function
		{
			l=x;
			b=y;
			h=z;
		}

		void showDimension() //instance member function
		{
			cout<<"length="<<l<<endl<<"breadth="<<b<<endl<<"height="<<h<<endl<<endl;
		}
};

int main()
{
	system("clear");
	Box *p,smallBox,Box1;			//	 _______	 _____________________
	smallBox.setDimension(12,10,5);		//	|	|	|  ____	 ____  ____   |	for accessing a function/variable 	    
	smallBox.showDimension();		//	|   	|-----> | |  l || b  || h  |  | using an object we use "." operator,but while
						//	|_______|	| |____||____||____|  |	using a object pointer we use "->" 	
	p=&Box1;				//	   p		|_____________________| operator		      
	p->setDimension(1,10,100);		//				Box1				     
	p->showDimension();			//	p is a pointer pointing to the object "Box1" i.e it contains address of object "Box1"
	getchar();				//	
}


