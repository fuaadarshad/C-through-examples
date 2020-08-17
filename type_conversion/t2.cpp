//class to class conversion using casting operator

#include<iostream>
using namespace std;

class Item
{
        private:
                int m,n;
        public:
                void showData()
                {
                        cout<<"m="<<m<<" n="<<n<<endl;
                }
                void setData(int u,int v)
                {
                        m=u;
			n=v;
                }

};

class Product
{
	private:
		int a,b;
	public:
		void setData(int x,int y)
		{
			a=x;
			b=y;
		}
	operator Item()		//i1=p1	 "casting operator" is used in the class whose object is on the right side and whose data has to be 
	{				//copied in object of class on left hand side	
		Item temp;
		temp.setData(a,b);	//p1 calls the casting operator so casting operator is present in the product class
		return temp;
	}

};


int main()
{
	system("clear");

	Product p1;

	Item i1;

	p1.setData(3,4);

	i1=p1;	//p1 calls the casting operator

	i1.showData();

	getchar();
}
