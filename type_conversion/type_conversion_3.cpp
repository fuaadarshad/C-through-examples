#include<iostream>
using namespace std;

class Item
{
        private:
                int m,n;
        public:
                void setData(int x,int y)
                {
                        m=x;
                        n=y;
                }
                int getM()
                {
                        return m;
                }

                int getN()
                {
                        return n;
                }
};

class Product
{
	private:
		int a,b;
	public:
		void showData()
		{
			cout<<"a="<<a<<" b="<<b<<endl;
		}
		
		Product()
		{}

		Product(Item i)
		{
			a=i.getM();	
			b=i.getN();	
		}
};


int main()
{
	system("clear");

	Product p1;

	Item i1;

	i1.setData(3,4);

	p1=i1;

	p1.showData();

	getchar();
}




