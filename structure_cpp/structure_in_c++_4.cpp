
//if there are more than one person working on this program, let's suppose there are two people one who is writing a 'structure' and another who is writing the main function then there are chances that person who is writing 'main()' might not have sufficient info regarding all the members of structure and by mistake he might give some input that is not required and can't be accepted or which could lead to data corruption, let's say here if "book_id" which is supposed to be a non negative value is given as '-ve' input(let's say by writing "b1.book_id=-100" then we don't have any way to avoid this in C but in C++ we could avoid this by using access specifier and make the program take input only through any member function of the structure,so here we would make all the members of the structure that we don't to be accessed directly as 'private' which means that these varibale could only be accessed only with the help of member functions declared as public(or we could also say that members of structure made private could only be accessed elsewhere(in main() or some other function) through member functions made public).
//
#include<iostream>
using namespace std;

struct book	
		
{	private:			 
		int book_id; 
		char title[20];
		float price;
	
	public:
	void input()	//member functions can also be used in structures in C++
	{
 		
		cout<<"enter book id"<<endl<<"enter title"<<endl<<"enter price"<<endl<<endl;
		cin>>book_id>>title>>price;
		if(book_id<0)
			book_id=-book_id;
	}

	void display()
	{
		cout<<endl<<book_id<<endl<<title<<endl<<price<<endl;
	}

	};


int main()
{
	book b1;
//	b1.book_id=100; //this can't be accessed directly (since it's been made private in structure)-->so this would generate an error(try it)
		
	b1.input(); //since input and output are also members of structure therefore we use "." operator for accessing them
	b1.display();
}

