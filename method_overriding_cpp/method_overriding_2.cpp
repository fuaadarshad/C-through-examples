//let's assume we have two classes, one representing a CAR and other representing a SUPEPR-CAR and both have different mechanisms for 
//changing gear (code1 & code2)
//but we can't implement the gear shifting mechanism of CAR in SUPER_CAR

#include<iostream>
using namespace std;

class CAR
{
	public:
		void shiftGear()
		{
			//code1   
		}

};

class SUPER_CAR:public CAR
{
	
	public:
		//we could have done the same job of gear shifting by writing another function in class SUPER_CAR but this would have
		//creted a problem, the user could also call shiftGear() function of parent class that way since we're 
		//inheriting the parent class. To avoid this above possibility we have used function over-riding
		void shiftGear()
		{	 
	   		//code2
		}

};


int main()
{
	system("clear");
	SUPER_CAR obj;
	obj.shiftGear(); //--> this would call the definition of shiftGear() function in the class "SUPER_CAR" but if we had created an object of class CAR then shiftGear() function of that class would have been called 
	getchar();
}
