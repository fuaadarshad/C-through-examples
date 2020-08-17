#include<iostream>
#include<vector>
using namespace std;
int main()
{
	system("clear");
				
	vector<int> v2;
	for(int i=0;i<10;i++)
		v2.push_back(10*i+10);
		
	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	cout<<endl;

// WE CAN ACCESS ELEMENTS PRESENT IN A VECTOR RANDOMLY
// if we wish to insert some value in between --> for this we would be using the iterators
	
	 vector<int>:: iterator it=v2.begin(); // we can consider iterator as a pointer | int* it=v2.begin() |
		 			      // here it is made to point to the first element
	
//	  ______________________________	
//	 |10|20|30|40|50|60|70|80|90|100|
//    	 |__|__|__|__|__|__|__|__|__|___|
//    	  /\
//    	  ||__"it" is pointing to the first element
//
	v2.insert(it+2,35);
//	  ______________________________	
//	 |10|20|30|40|50|60|70|80|90|100| it+2
//    	 |__|__|__|__|__|__|__|__|__|___|   \
//    	  	/\			     \
//    	 	||__"it" is pointing to the third element(index=2) and and one new element is placed at this position and the rest of the
//    	 		 following elements get shifted by 1
//	  _________________________________	
//	 |10|20|35|30|40|50|60|70|80|90|100|
//    	 |__|__|__|__|__|__|__|__|__|__|___|
	
	 for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	 cout<<endl;
}
