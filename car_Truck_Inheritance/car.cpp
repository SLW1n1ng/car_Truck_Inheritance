#include "car.h"
#include <iostream>

Car::Car(const std::string& color, int year, const std::string& make, const std::string& model) : Vehicle(color, year, make, model) {}
void Car::soundHorn() const { std::cout << "Sound car Horn" << std::endl; }
void Car::start() const { std::cout << "Start car" << std::endl; }
void Car::stop() const { std::cout << "Stop car" << std::endl; }

void Car::accelerate() {
	std::cout << "Car is Accelerating" << std::endl; // 10 times print speed += 10
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed += 10) << " km/h, ";
	}
	std::cout << "Acceleration Complete" << std::endl;
}

void Car::decelerate() {							// 10 times print speed -= 10
	std::cout << "Car is decelerating" << std::endl; 
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed -= 10) << " km/h, ";
	}
	std::cout << "Deceleration Complete" << std::endl;
}