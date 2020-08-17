#include<iostream>

using namespace std;

struct book
{		 
	int book_id; 
	char title[20];
	float price;
};

void display(book);
book input();


int main()
{
	book b1;
	b1=input();
	
	display(b1); 
}

void display(book b)
{
	cout<<endl<<b.book_id<<endl<<b.title<<endl<<b.price<<endl<<endl;
}

book input()
{
	book b;
 	cout<<"enter book id"<<endl<<"enter title"<<endl<<"enter price"<<endl<<endl;
        cin>>b.book_id>>b.title>>b.price;
	return b;
}
