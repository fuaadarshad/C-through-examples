// Array is a linear collection of similar elements.
// Array container in STL provides us the implementation of static array
// Array can store primitive(float,int,char...) as well as non-primitive(class,structure,...) data types
//     __________________________    |					   |	 ___________________________
//    | 1| 2| 3| 4| 5| 6| 7| 8| 9| __|					   |___	|stu|stu|stu|stu|stu|stu|stu|
//    |__|__|__|__|__|__|__|__|__| 						|___|___|___|___|___|___|___|  
//
//
//   How to create an object of array??						       ______________________                     
//   										      |	 _________________   | data_array	
//   array<object_type,array_size>array_name; ---> array<int,3> data_array; --------->|	|int  |int  |int  |  | (name of object)
//                                                                                    | |_____|_____|_____|  | in which an array
// -->It creates an empty array of object_type with maximum size of array_size        |    0     1     2     | of 3 integers is 
//										      |______________________| created


// Few important and most commonly used functions of array template
// 1) at
// 2) [] operator
// 3) front() --> returns the first element in the array
// 4) back() --> returns the last element in the array
// 5) fill() --> it assigns the given value to every element of the array
// 6) swap() --> it swaps the content of two arrays of same type and same size.It swaps index wise,thus element of index "i" of first array
//		 will be swapped with the element of index "i" of the second array.  first_array.swap(second_array);
// 7) size() --> it gives the number of elements present in an array
// 8) begin()--> it returns the iterator pointing to the first elementof array 
// 9) end() --> it returns an iterator pointing to an element next to the last element in the array
//    __________________________ 
//   | 1| 2| 3| 4| 5|  |  |  |  |
//   |__|__|__|__|__|__|__|__|__|
//		     /\
//		     ||
//	   element next to the last
#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int,8> data_array={11,22,33,44,55}; //initialization of array inside object "data_array"

	cout<<data_array.at(2); //here "at(index)" is used for finding value of an element of array at an "index" 

	cout<<endl;

//	cout<<data_array.at(5);  //if the given range is greater than the array size(0-4), out_of_range exception  is thrown

	cout<<data_array[3]; //this will print the value of array stored at index no.3-->44

	cout<<endl;

	cout<<data_array.front();	

	cout<<endl;

	cout<<data_array.back();	
	
	cout<<endl;

	array<int,5> da1={1,2,3,4,5};
	array<int,5> da2={5,4,3,2,1};
	da1.swap(da2);

	cout<<"da1=";
	for(int i=0;i<5;i++)
	{
		cout<<da1[i]<<" ";
	}

		cout<<endl;
	
	cout<<"da2=";
	for(int i=0;i<5;i++)
	{
		cout<<da2[i]<<" ";
	}

	cout<<endl;
	cout<<"size of data_array ="<<data_array.size();
}


