#pragma once

class Fan {

private:
	int speed;
	bool on;
	double radius;

public:
	Fan();
	bool setSpeed(int newSpeed);
	int getSpeed();
	void turnOn();
	void turnOff();
	bool isOn();
	bool setRadius(double newRadius);
	double getRadius();

};