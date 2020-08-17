#include<iostream>
#include<vector>
using namespace std;
int main()
{
	system("clear");
				
	vector<int> v1;	//vector with capacity 0 (blank vector)
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=0


//push_back() is a member function,which can be used to add value to the vector at the end

//capacity() returns the capacity of the vector

	v1.push_back(10);//
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=1 capacity increases from 0->1,further it keeps on getting * by 2
       							   //whenever the empty space gets depleted	
	v1.push_back(20);				   
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=2(1*2)
								
	v1.push_back(30);						
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=4 (2*2)

	v1.push_back(40);	
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=4          _______________________
							   //			|10|20|30|40|50|60|  |  | <---v1
	v1.push_back(50);				   //			|__|__|__|__|__|__|__|__|
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=8 (2*4)    0  1  2  3  4  5  6  7

	v1.push_back(60);						
	cout<<"Current capacity is "<<v1.capacity()<<endl; //capacity=8 

	for(int i=0;i<8;i++)
		cout<<v1[i]<<" "; 
	cout<<endl;
	
	vector<int> v2;
	for(int i=0;i<10;i++)
		v2.push_back(10*i+10);

//front() returns the first element of the vector
	cout<<"\nFirst value is "<<v2.front(); 

//back() returns the last element of the vector
	cout<<"\nLast value is "<<v2.back();

	cout<<endl;	

//pop_back() is a member function that removes the last element but unlike push_back() it doesn't decrease capacity
	v2.pop_back();
	cout<<"after pop"<<endl;
	cout<<"current capacity is "<<v2.capacity()<<endl;

	v2.pop_back();
	cout<<"current capacity is "<<v2.capacity()<<endl;
	
	v2.pop_back();
	cout<<"current capacity is "<<v2.capacity()<<endl;

//size() returns the no. of elements currently in the vector	
	cout<<"Total no. of elements present in vector are "<<v2.size()<<endl; 

	for(int i=0;i<v2.size();i++) //v2.size gives the no. of elements present in vector v2
		cout<<v2[i]<<" ";

//clear() removes all elements from the vector
	v2.clear();
	cout<<"current capacity is "<<v2.capacity()<<endl;
	cout<<"Total no. of elements present in vector are "<<v2.size()<<endl; 
		

}
