#ifndef TRUCK_H
#define TRUCK_H
#include "vehicle.h"

class Truck : public Vehicle {
public:
	Truck(const std::string& color, int year, const std::string& make, const std::string& model, int speed);

	void soundHorn() const override;
	void start() const override;
	void stop() const override;
	void accelerate() override;
	void decelerate() override;

};

#endif 