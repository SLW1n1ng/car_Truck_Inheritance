#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(const std::string& color, int year, const std::string& make, const std::string& model) : color(color), year(year), make(make), model(model) { speed = 0; } //constructor

void Vehicle::soundHorn() const { std::cout << "Vehicle horn" << std::endl; }
void Vehicle::start() const { std::cout << "Vehicle started" << std::endl; }
void Vehicle::stop() const { std::cout << "Vehicle stopped" << std::endl; }
void Vehicle::accelerate() { std::cout << "Vehicle is accelerating" << std::endl; }
void Vehicle::decelerate() { std::cout << "Vehicle is decelerating" << std::endl; }

std::string Vehicle::getInfo() const { //get info
	return "Make: " + make + ", Model: " + model + ", Color: " + color + ", Year: " + std::to_string(year);
}
