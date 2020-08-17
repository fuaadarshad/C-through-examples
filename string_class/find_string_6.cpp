#include<iostream>
#include<string>
using namespace std;

int main()
{	
	system("clear");
	//index no.0123456789.....
	string s1="Hello duniya walon!!!!";
	int i=s1.find("d"); //it returns the index 
	int j=s1.find("duniya"); //it returns the index 
	int k=s1.find("!"); //it returns the index 
	int l=s1.find("lon"); //it returns the index 
	cout<<"i="<<i<<endl;
	cout<<"j="<<j<<endl;
	cout<<"k="<<k<<endl;
	cout<<"l="<<l<<endl;
	getchar();
}
