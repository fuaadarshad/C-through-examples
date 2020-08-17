// NUMERIC ARRAYS
//			 ______________
// int a[5];		|__|__|__|__|__|
// 		          0  1  2  3  4
//			 ___________
//  float b[4];	        |__|__|__|__|
// 	                  0  1  2  3
//			 ___________
//  string s[3];        |___|___|___|
//  			  0   1   2	
//
// these are called numeric arrays because their indices are marked by numerics in a sequenced order starting from 0 (0.....n) ---> arr[n+1]
// which can be used for accessing a particular element in it.
//
// ASSOCIATIVE ARRAYS 
//
//    ___________________ ->these arrays have names or numbers(not necessarily ordered or of integer type) as their indices k/a "key" and
// m |43  |23  |51  |35  |  using these we can access the elements of such arrays  
//   |____|____|____|____|		   	
//    AMIT ANUJ  RAJ  DILIP-->"key"	 m["key"]--> element of array k/a "value" can be accessed
//
// -->Maps are used to replicate associative arrays
//
// -->Maps contain sorted "key-value" pair, in which each key is unique and can't be changed ,it can be inserted or deleted
//    but can't be altered 
// 
// -->Value associated with keys can be altered. 
//
// Properties of Map
// 1) Maps always arrange its keys in sorted order
// 2) In case the keys are string type,they are sorted in dictionary order
//	The example for which we'll be writing the code
//
//	Customer No.	Customer Name
//	 100		 Gajendra
//	 123		 Dilip
//	 145		 Aditya
//	 171		 Shahid
//	 200		 Rajesh
//
//	 key->Customer no.
//	 value->Customer name	

#include<iostream>
#include<map>
using namespace std;

int main()
{

// first creating an object and then assigning values to it
	map<int,string> customer; //declaration
	customer[100]="Gajendra"; //
	customer[123]="Dilip";	  //	
	customer[145]="Aditya";   // Assignment
	customer[171]="Shahid";   //
	customer[200]="Rajesh";   //

	map<int,string> customer1{ {100,"Gajendra"},{123,"Dilip"},{145,"Aditya"},{171,"Shahid"},{200,"Rajesh"} }; //initialization


// Now we want to get all the elements printed in the associative array--> for(int i=0;i<n;i++)	    can we get it done this way???? NO
// because the index is not sequential starting from 0		 		cout<<customer1[i];	
// we use iterators for this purpose				

	map<int,string>::iterator p=customer1.begin(); //here the iterator is made to point to the beginning 

	while(p!=customer1.end()) //iterator will be incremented each time and value will be printed till iterator points to the last element
	{
	 cout<<p->first<<"--> "<<p->second<<endl; // p is pointing to a pair of "key" & "value" where "key" is the 1st part &
	 p++;				          // "value" is the 2nd part
	}
}
