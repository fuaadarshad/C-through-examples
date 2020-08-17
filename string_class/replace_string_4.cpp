#include<iostream>
#include<string>
using namespace std;

int main()
{	
	system("clear");
	string s1="Hello";
	s1.replace(2,2,"fuaad");    //H e l l o
	cout<<"s1="<<s1<<endl;      //0 1 2 3 4 <--index no.
	getchar();		//replace(index_no,length,string_to_be_replaced_with)
				//here length of 2 characters from l(index no.2) will be be replaced by string "fuaad"
}
