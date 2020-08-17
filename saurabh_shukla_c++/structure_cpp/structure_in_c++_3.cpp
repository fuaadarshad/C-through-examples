#include<iostream>

using namespace std;

struct book	//this structure contains 3 variables and 2 member functions
		//this demonstrates a way of achieving ENCAPSULATION-> it is an act of combining properties 
		//and methods related to the same entity
		
{			 
	int book_id; 
	char title[20];
	float price;
	void input()	//member functions can also be used in structures in C++
	{
 	
		cout<<"enter book id"<<endl<<"enter title"<<endl<<"enter price"<<endl<<endl;
//		cin>>b.book_id>>b.title>>b.price; //not required
		cin>>book_id>>title>>price; //any variable(variables in a structure) can be accessed in any member function
	       				     //without use of "."operator 	
	}

	void display()
	{
		cout<<endl<<book_id<<endl<<title<<endl<<price<<endl;
	}

	};



int main()
{
	book b1;
	b1.input(); //since input and output are also members of structure therefore we use "." operator for accessing them
	b1.display();
}

