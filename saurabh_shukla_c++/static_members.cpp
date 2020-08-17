#include<iostream>

void fun()
{
	static int x; //x-> static local variable
		      //-->by default value=0
	int y;	      //-->life-time of variable
		      //m/m allocation to variable "x" takes place once program starts
		      // and m/m is allocated to variable "y" once function "fun" starts	
}

//"static member variable"


class Account
{
	private:
		int balance;	//Instance member variable
		static float roi;	//Static Member variable or Class Vraiable(declaration)-->declaration is done inside the class
	public:	
//		static float roi;
		void setBalance(int b)
		{
			balance=b;
		}
/*		void setRoi(float r)
		{
			roi=r;
		}
*/		static void setRoi(float r) //we need to add a static keyword to encounter the problem faced in line no.56 and the function 
 					    //would be known as "static member function" -->these are required to call "static members" even 
					    //without the creation of any object 
		{
			roi=r;
		}


};
float /*membership label*/Account::/*till here*/roi=3.5f; //Static Member variable or Class Vraiable(definition)
								// they must be defined outside the class
// m/m is allocated for this class variable only when this definition is done and otherwise m/m allocation doesn't takes place 
// if value is not initialized it will be made 0 automatically
// the "class variable" creation doesn't depend on the objects, this means that irrespective of the no. of objects created there will only be
// one "class variable"-->"roi" created for the entire program
// even if we don't create any "class object" then also the "member variable would be created"-->see how on line no.43


int main()
{
	system("clear");
	Account a1;//object a1 will be created and an instance member variable "int balance" will be created as a part of it but "static float roi" will not be created as a part of the object.

//	a1.roi=10; //class variable could be accessed this way if it's written under the "public" access modifier instead of private as in 
		   //line no.21

//	Account::roi=4.5; //class variable could be accessed this way if it's written under the "public" access modifier instead of "private" as in line no.21 and "no object of the class has been created"

//	a1.setRoi(4.5f); //this method can be used to set the value of "roi"--> class variable even when the "variable" declaration is done under "private access modifier"(line no.26) ,but this method demands the creation of an object first and we know that "class variable" doesn't essentially needs "class" to be created for its existence and initialization so we need to check out some other way of doing so -->see line no.30 and below line(60) 
	
//	/*membershiplabel*/Account::/*till here*/setRoi(4.5f);	//"static member function" gets called here which will put the value in "roi"
								//even without the existence of class object-->this is the use of 
								//"static member function"

	
}
