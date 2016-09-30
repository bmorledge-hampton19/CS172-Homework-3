#include "Fan.h"

Fan::Fan()
{

	// Default parameters.
	speed = 1;
	on = false;
	radius = 5;

}

bool Fan::setSpeed(int newSpeed)
{

	if (newSpeed > 0 && newSpeed < 4) {
		speed = newSpeed;
		return true;
	}
	else return false;

}

int Fan::getSpeed()
{
	return speed;
}

void Fan::turnOn()
{
	on = true;
}

void Fan::turnOff()
{
	on = false;
}

bool Fan::isOn()
{
	return on;
}

bool Fan::setRadius(double newRadius)
{

	if (newRadius > 0) {
		radius = newRadius;
		return true;
	}
	else return false;

}

double Fan::getRadius()
{
	return radius;
}
