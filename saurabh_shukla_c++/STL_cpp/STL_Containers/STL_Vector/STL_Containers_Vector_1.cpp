// Vector--> The most general purpose container is Vector
// It supports Dynamic Array.
// Size of "Static Array" is fixed ,no flexibility to grow or shrink during execution
// Vector can provide memory flexibility
// Since vector is a dynamic array,it doesn't needs size during declaration " vector<int> v1; "-->a blank vector is created(vector size is 0)

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	system("clear");
	vector<int> v1;//blank vector
	vector<int> v2 {20,10,35,16,30}; //this way  vector can be initialaized along with declaration
        vector<string> v3 {"Fuaad","Arshad"};
	
	vector<int> v4(5);//creating a vector with array length 5
	vector<string> v5(3,"hello");//  _________________	
				     //	|hello|hello|hello| v5
				     //	|_____|_____|_____|
				     //	   0	 1     2
	
	//relational operators can also work with vector (== , != , < , > , <= ,>= )
					//	________________
	cout<<v5[0]<<endl;		//			|
	cout<<v5[1]<<endl;		//			|	
	cout<<v5[2]<<endl;		//			|
					//			|
					//			|--------> [] subscript operator
	for(int i=0;i<5;i++)		//			|
	  cout<<v2[i]<<" ";		//			|
	  cout<<endl; 			//	________________|
					
	//at() --> returns the element at index "i" in a vector 

	cout<<"value at index 2 ="<<v2.at(2)<<endl;
}	
