#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
protected:				//protected so that derived classes can access them
	std::string color;
	std::string make;
	std::string model;
	int year;
	int speed;

public:
	Vehicle(const std::string& color, int year, const std::string& make, const std::string& model, int speed);

	virtual void soundHorn() const;
	virtual void start() const;
	virtual void stop() const;
	virtual void accelerate();
	virtual void decelerate();
	virtual std::string getInfo () const;
};

#endif 