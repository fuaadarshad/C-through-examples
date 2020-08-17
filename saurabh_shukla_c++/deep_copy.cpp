#include<iostream>

using namespace std;

class Dummy
{
	private:
		int a,b;
		int *p;
	public:
		Dummy()
		{
			p=new int(0);
		}
		void setData(int x,int y,int z)
		{
			a=x;
			b=y;
			*p=z;
		}
		void showData()
		{
			cout<<"\na="<<a<<" b="<<b<<" *p="<<*p<<endl;
		}



		Dummy(Dummy &other)	//'copy constructor' is explicitly written for implementing deep copy
		{
			this->a=other.a;
			this->b=other.b;
			this->p=new int;	//creates a new m/m block having an address different from the pointer in object 'other' 
			*this->p=*other.p;	//value of object gets copied to this new memory block created
		}

		Dummy& operator=(Dummy &other) //'default copy assignment operator' is explicitly written for implementing deep copy
		{
			this->a=other.a;
			this->b=other.b;
			this->p=new int;	//creates a new m/m block having an address different from the pointer in object 'other' 
			*this->p=*other.p;	//value of object gets copied to this new memory block created


			return *this;
		}

		~Dummy()
		{
			delete (this->p);
			this->p=NULL;
		}
};
/*								
 ______________________  	   ______________________
|  ____   ____   ____  |	  |  ____   ____   ____  |		
| |  3 | | 4  |	|1000| | 	  | |  3 | | 4  | |2000| |
| |____| |____|	|____| | 	  | |____| |____| |____| |
|   a	   b	  | p  | 	  |   a      b      |p	 |		 
|_________________|____| 	  |_________________|____|		
	d1	  |			d2	    |			 
		  |				    |			
		  ----> ____    		    |	   ____    	  
                       |  5 |1000 		    ----->|  5 |2000
                       |____|				  |____|	      		
                         *p				    *p	      	
*/


int main()
{
	system("clear");
	Dummy d1;
	d1.setData(3,4,5);
	Dummy d2;
	d2=d1;

	d2.showData();

	d1.setData(3,4,7);

	d1.showData();	// o/p -> a=3 b=4 *p=7
	d2.showData();	//demerit of 'shallow copy' is overcome in 'deep copy'	 o/p -> a=3 b=4 *p=5



}
