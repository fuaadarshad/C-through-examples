/*
--->Class is used to describe properties and behaviour of an object

let's say we want to make a class of "car" which will have some properties
-->price       		we will be using some methods(functions) for accessing these properties
-->fuel_type			->setPrice()	->setFuel_type()	->setEngine()	->setColour()
-->engine			->getPrice()	->getFuel_type()	->getEngine()	->getColour()
-->colour

but now we're required to make a class for "sports car" which will have features/properties of "car" class and some additional features 
now we have two options either to create a new class for "sports car" or make changes to the pre-existing "car" class
the first option is futile since we'd have to rewrite the existing features of "car" again in "sports car" and in second we'd end up
creating a class "super car" but our "car" class would be lost, so we'd take a midway and use "inheritance" in which we can take features of
parent class "car" and add some more features in it to make a child class "sports car" 
-->alarm
-->ABS
-->Navigator
-->Collision_Avoidance + -->features of "parent class"


Existing class/Old class/Parent class/Base class

New class/Child class/Derived class

"SYNTAX"

class Base_class
{

};

class Derived_class:Access_specifier Base_class
{

};

"TYPES OF INHERITANCE"

--> Single Level Inheritance

//if we don't write any access specifier/visibility mode it would be considered as "private"

class A				____
{			       |____|class A
				  |     ____
};				  ---->|____|class B
			
class B:public A		class B inherits class A
{

};






--> Multilevel Inheritance

//if we don't write any access specifier/visibility mode it would be considered as "private"

class A                         ____
{                              |____|class A
                                  |      ____
};                                ----->|____|class B
class B:public A			   |      ____
{                              	 	   ----->|____|class C

};
class C:public B
{

};

Example :  class A(FURNITURE)-->class B(DINING TABLE)-->class C(ROUND DINING TABLE)




--> Multiple Inheritance

//if we don't write any access specifier/visibility mode it would be considered as "private"

class A1			____			 ____
{		       class A1|____|   	class A2|____|
				  |	____		   |	
};				  ---->|____|<--------------
					class B 	
class A2;
{

};

class B:public A1,public A2
{

};



--> Hierarchial Inheritance

//if we don't write any access specifier/visibility mode it would be considered as "private"				
					class A	
class A					____
{				  -----|____|-------------
				  |			  |
};				  |			  |
class B1:public A		 _\/_			 _\/_	
{	 		class B1|____|   	class B2|____|
			
};				class A(VEHICLE)-->class B1(TWO-WHEELER)
class B2:public A		class A(VEHICLE)-->class B2(FOUR-WHEELER)	
{

};		
				  	 		  
				        		   	
				  
//Availability vs Accessibility

Whenever we create an object all the "member variables" present in that class will be allocated memory irrespective of their 
visibility-mode/access-specifier(public , private or protected) --> AVAILABILITY

But we can't access all the "member variables" present in the class using the object 
for eg: let's say class name is Complex
//	class Complex
//	{
//		public:
//			int a;
//		private:
//			int b;
//		protected:
//			int c;
//	};
//	Complex c1;
//	c1.a=5;	(correct)
//	c1.b=10; (we can't do this)-->incorrect
	
	this means that we can access only public members directly and not others like private or protected
	This is ACCESSIBILITY


	TYPES OF USERS OF A CLASS

--> User 1 will create object of your class

--> User 2 will derive a class from your class

	_____
       |_____|---> private 
       |_____|---> public
       |_____|---> protected
      
ACCESSIBILITY IN DIFFERENT VISIBILITY MODES(private\public\protected)


----> public and protected members of parent class can only be accessed in child class 
      (private members of parent class cant be accessed in child class)

 (1)  ( when using access specifier/visibilty mode "private" while inheriting)	       
	
 	parent class	derived class
	 private   ----> can't be accessed 	
	 public	   ----> private
	 protected ----> private


 (2)  ( when using access specifier "public" while inheriting)	       
	
	parent class	derived class
	 private   ----> can't be accessed
	 public	   ----> public
	 protected ----> protected


 (3)  ( when using access specifier "protected" while inheriting)	       

	parent class	derived class
	 private   ---->  can't be accessed 	
	 public	   ---->  protected
	 protected ---->  protected



*/



