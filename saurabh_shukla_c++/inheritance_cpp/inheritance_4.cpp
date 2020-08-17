#include<iostream>
using namespace std;

class Car
{
	private:
		int gear;
	public:
		void incrementGear()
		{
			if(gear<5)
				gear++;
		}
};

class SportsCar: public Car //object of child class "SportsCar" will only be able to access "incrementGear()" function in class "Car" if child class has it in its "public" visibilty-mode --> this is only possible if we inherit "Car" class using "public" visibility-mode
{


};
