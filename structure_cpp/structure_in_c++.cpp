#include<iostream>
#include<string.h>

using namespace std;

void display(struct book);


struct book //no memory will be allocated for this structure since we are only defining the structure here,m/m allocation will take place once
{			// we create a structure variable 
	int book_id;	//this structure can be used anywhere in the entire program by any function since it is globally defined 
	char title[20];     //had it been defined inside main we'd only be able to use it locally in main
	float price;
}b2,b4; //b2 is a global structure variable 

int main()
{
//	struct book b1; //difference in C and C++,use of struct keyword is optional in C++ whereas it is mandatory in C
	book b1={100,"Let Us C++",150.87}; //writing structure variable without struct keyword is also valid in C++ 
					   //b1 is a local structure variable
					   //declaration and initialization done at the same time
	
	
	b2.book_id=110;				//if assignment is done later after declaration then it has to be done this way
	strcpy(b2.title,"C by Dennis Ritchie");
	b2.price=175;

	book b3;
	b3.book_id=101;
//	b3.title="C++ made easy"; //this is wrong
	strcpy(b3.title,"C++ made easy");
	b3.price=109.87;
	
	b4=b2;					//assigning values of one structure variable to another
	
	display(b1); 
	display(b2); 
	display(b3); 
	display(b4); 
}

void display(struct book b)
{
	cout<<b.book_id<<endl<<b.title<<endl<<b.price<<endl<<endl;
}
