#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; 
  
//    sort(v.begin(), v.end()); //this function is used to sort a vector in ascending order 
    
    sort(v.begin(), v.end(),greater<int>()); //this function is used to sort a vector in descending order 
    					     //3rd parameter here is "greater<variable_type>()"
  
    cout << "Sorted \n"; 
    for (auto x : v)		 //range based for loop
        cout << x << " "; 
  
    return 0; 
} 
