#include "car.h"
#include "truck.h"
#include <iostream>

int main() {
	Car car("Red", 2018, "Ford", "Mustang");		// create a car object
	Truck truck("Blue", 2018, "Ford", "F-150");	// create a truck object

	std::cout << "--------- Car --------\n" << car.getInfo() << std::endl;
	car.soundHorn();							// call the soundHorn() function
	car.start();								// call the start() function
	car.accelerate();							// call the accelerate() function
	car.decelerate();							// call the decelerate() function
	car.stop();									// call the stop() function

	std::cout << "\n\n--------- Truck --------\n" << truck.getInfo() << std::endl;
	truck.soundHorn();							// call the soundHorn() function
	truck.start();								// call the start() function
	truck.accelerate();							// call the accelerate() function
	truck.decelerate();							// call the decelerate() function
	truck.stop();								// call the stop() function

	return 0;
}

