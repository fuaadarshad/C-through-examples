#include<iostream>

using namespace std;
class Science; //why is it generating error even after declaring it b4
class Maths
{
	private:
		int m1,m2;

	public:
		Maths(int x,int y)
		{
			m1=x;
			m2=y;
		}

		operator Science()				//this code will give error because here we have used "class Science"
		{						//which is later defined, so we need to keep "class Science" before
			Science temp;				//"class Maths"
			temp.setData(m1,m2);
			
			return temp;	
		}

};
class Science
{
	private:
		int s1,s2;

	public:
		void display()
		{
			cout<<"s1="<<s1<<" s2="<<s2<<endl;
		}
		
		void setData(int x,int y)
		{
			s1=x;
			s2=y;
		}


};



int main()
{
	Maths m(2,3);

	Science s;

	s=m;

	s.display();
}



