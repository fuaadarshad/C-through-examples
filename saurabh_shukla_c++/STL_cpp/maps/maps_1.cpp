//	Customer No.	Customer Name
//	 100		 Gajendra
//	 123		 Dilip
//	 145		 Aditya
//	 171		 Shahid
//	 200		 Rajesh
//
//	 key->Customer no.
//	 value->Customer name	
//
//
// Some Useful functions of map class
// 1) at()
// 2) []
// 3) size()
// 4) empty()
// 5) insert()
// 6) clear()

#include<iostream>
#include<map>
using namespace std;

int main()
{

        map<int,string> customer; //declaration		we are inserting "key" in map in random order but "Maps" always arrange its 
        customer[100]="Gajendra"; //			keys in sorted order	
        customer[200]="Rajesh";   //			
        customer[145]="Aditya";   // Assignment
        customer[171]="Shahid";   //
        customer[123]="Dilip";    //    

// at()
cout<<customer.at(123)<<endl;

// [] operator
cout<<customer[171]<<endl;

// size()
cout<<"size is "<<customer.size()<<endl;

//insert()
customer.insert(pair<int,string> {298,"Fuaad"});

//empty()
cout<<customer.empty()<<endl; //this function returns 1 whenever associative array is empty otherwise 0


        map<int,string>::iterator p=customer.begin(); //here the iterator is made to point to the beginning 

        while(p!=customer.end()) //iterator will be incremented each time and value will be printed till iterator points to the last element
        {
         cout<<p->first<<"--> "<<p->second<<endl; // p is pointing to a pair of "key" & "value" where "key" is the 1st part &
         p++;                                     // "value" is the 2nd part
        }

//clear()
customer.clear();

//empty()
cout<<customer.empty()<<endl; //after clearing the entire array empty will return 1

}
