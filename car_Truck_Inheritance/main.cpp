#include "car.h"
#include "truck.h"
#include <iostream>

int main() {
	Car car("Red", 2018, "Ford", "Mustang", 0);		// create a car object
	Truck truck("Blue", 2018, "Ford", "F-150", 0);	// create a truck object

	std::cout << "--------- Car --------\n" << car.getInfo() << std::endl;
	car.soundHorn();
	car.start();
	car.accelerate();
	car.decelerate();
	car.stop();

	std::cout << "\n\n--------- Truck --------\n" << truck.getInfo() << std::endl;
	truck.soundHorn();
	truck.start();
	truck.accelerate();
	truck.decelerate();
	truck.stop();

	return 0;
}

