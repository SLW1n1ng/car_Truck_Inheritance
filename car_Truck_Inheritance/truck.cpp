#include "truck.h"
#include <iostream>

Truck::Truck(const std::string& color, int year, const std::string& make, const std::string& model) : Vehicle(color, year, make, model) {} //constructor

void Truck::soundHorn() const { std::cout << "Sound truck Horn" << std::endl; }
void Truck::start() const { std::cout << "Start truck" << std::endl; }
void Truck::stop() const { std::cout << "Stop truck" << std::endl; }

void Truck::accelerate() {	//accelerate and decelerate functions. 
	std::cout << "Truck is Accelerating" << std::endl; 
	for (size_t i = 0; i < 10; i++){
		std::cout << (speed += 10) << " km/h, ";
	}
	std::cout << "Acceleration Complete" << std::endl;
}

void Truck::decelerate() { //accelerate and decelerate functions.
	std::cout << "Truck is decelerating" << std::endl; 
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed -= 10) << " km/h, ";
	}
	std::cout << "Deceleration Complete" << std::endl;
}
