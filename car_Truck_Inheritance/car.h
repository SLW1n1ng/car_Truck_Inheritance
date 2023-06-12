#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car : public Vehicle
{
public:
	Car(const std::string& color, int year, const std::string& make, const std::string& model, int speed);
	void soundHorn() const override;
	void start() const override;
	void stop() const override;
	void accelerate() override;
	void decelerate() override;
};

#endif 
