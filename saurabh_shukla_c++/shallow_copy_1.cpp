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

		Dummy(Dummy &other)	//if not written explicitly this 'copy constructor' gets implicitly invoked	
		{
			this->a=other.a;
			this->b=other.b;
			this->p=other.p;
		}

		Dummy& operator=(Dummy &other) //if not written explicitly this 'default copy assignment operator' gets implicitly invoked
		{
			this->a=other.a;
			this->b=other.b;
			this->p=other.p;

			return *this;
		}

		~Dummy()
		{
			delete this->p;
			this->p=NULL;
		}
};
/*									according to shallow copy each data member gets copied as it is
 ______________________  	   _____________________		and due to this the pointer variable p in d2 also gets the 
|  ____   ____   ____  |	  |  ____   ____   ____  |		copy of pointer vaariable p in d1
| |  3 | | 4  |	|1000| | 	  | |  3 | | 4  | |1000| |
| |____| |____|	|____| | 	  | |____| |____| |____| |
|   a	   b	  | p  | 	  |   a      b      |p	 |		due to this both the variable pointers point to the same memory 
|_________________|____| 	  |_________________|____|		block--> this creates a shared block of memory
	d1	  |				    |			1)any modification made in one object will be refleted in another 
		  |				    |			object
		  ----> ____    		    |			2)if one pointer is freed the pointer of other object will become 
                       |  5 |1000 <------------------			a dangling pointer
                       |____|							
                         *p						both the effects are undesirable
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

	d2.showData();	//case 2)



}
