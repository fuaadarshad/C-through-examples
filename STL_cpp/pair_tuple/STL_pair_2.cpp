//pair is a template class in Standard Template Library but it's not a part of container
//
//we use pair for representing data that we want to keep together for example name & contact no. of people or Country name & its capital etc.
//
//ex--> pair<string,int> p1; data types mentioned can be primitive as well as non-primitive


#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int age;
	public:
		void setStudent(string s,int a)
		{
			name=s;
			age=a;
		}

		void showStudent()
		{
			cout<<"name of student is "<<name<<endl;
			cout<<"age of student is "<<age<<endl;
		}
};

int main()
{
	pair<string,int> p1;
	pair<string,string> p2;
	pair<string,float> p3;
	pair<int,student> p4;
	
	p1=make_pair("Fuaad",99);
	
	p2=make_pair("Fuaad","Allahabad");
	
	p3=make_pair("Let us C",256.98f);  //try by removing f

	student s1;
	s1.setStudent("Hena",23);
	p4=make_pair(1,s1);

//	Accessing pair members
	cout<<"pair1"<<endl;
	cout<<p1.first<<" , "<<p1.second<<endl; // Fuaad,99

	cout<<"pair2"<<endl;
	cout<<p2.first<<" , "<<p2.second<<endl; // Fuaad,Allahabad

	cout<<"pair3"<<endl;
	cout<<p3.first<<" , "<<p3.second<<endl; // Let us C,256.98
	
	cout<<"pair4"<<endl;
	cout<<p4.first<<" , ";
	student s2=p4.second; //second part of pair4 is an object
        s2.showStudent();	
} 
//we can also use relational operators for comparison of two pairs(==,<=,>=,<,>)	
