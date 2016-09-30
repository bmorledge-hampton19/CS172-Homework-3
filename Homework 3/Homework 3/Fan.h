#pragma once

class Fan {

private:

	// The fan's speed.  Can be 1, 2, or 3.
	int speed;

	// Boolean that is true when the fan is on and false when it is off.
	bool on;

	// The radius of the fan.  Cannot be negative.
	double radius;

public:

	// Default fan constructor.
	// Set's radius to 5, speed to 1, and turns fan off.
	Fan();

	// Set's the speed and returns true if newSpeed is 1, 2, or 3.
	bool setSpeed(int newSpeed);
	
	// Basic getter.
	int getSpeed();

	// Set's on to true.
	void turnOn();

	// Set's on to false.
	void turnOff();

	// Returns the state of on.
	bool isOn();

	// Set's the radius and returns true if newRadius is nonnegative.
	bool setRadius(double newRadius);

	// Basic getter.
	double getRadius();

};