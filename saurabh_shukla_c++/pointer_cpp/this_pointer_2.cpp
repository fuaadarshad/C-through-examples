//---> "this" is a keyword

//---> "this" is a local object pointer in every instance member function containing address of caller object

//---> "this" pointer can't be modified



#include<iostream>
using namespace std;

class Box
{
	private:
		int l,b,h; //instance member variable 
	public:
		void setDimension(int l,int b,int h) //instance member function (l,b,h)-->local variable
		{
		  //why do we use "this" pointer ???
		  //if we write like:
        	//l=l;
		//b=b;
		//h=h;  there will be conflict as both variables on "left" and "right" both would be understood as same (local variable)
			
			
			
			this->l=l;  //"this" is a pointer to the caller object,whenever an object let's say for eg: smallBox calls 
			this->b=b;  //setDimension function "this" stores its address and "this->l" means "instance member variable" 
			this->h=h;  //and normal "l" means "local variable"
		}

		void showDimension() //instance member function
		{
			cout<<"length="<<l<<endl<<"breadth="<<b<<endl<<"height="<<h<<endl<<endl;
		}
};

int main()
{
	system("clear");		
	Box smallBox;	
	smallBox.setDimension(12,10,5);	
	smallBox.showDimension();	
					
	getchar();			
}


