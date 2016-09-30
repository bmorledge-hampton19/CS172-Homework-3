////////////////
// Ben Morledge-Hampton
// Homework 3
// CS 172-1
// 9/30/2016
////////////////

// Pre-Processor Directives
#include "Fan.h"
#include <iostream>
using namespace std;

// Main function
int main() {

	// Create two fan objects.
	Fan fan1;
	Fan fan2;

	// Set fan1's parameters.
	fan1.setSpeed(3);
	fan1.setRadius(10);
	fan1.turnOn();

	// Set fan2's parameters.
	fan2.setSpeed(2);
	// Don't need to set radius to 2, as it is already in the default constructor.  Nifty!
	// fan1 is bigger and faster than fan2, so don't even turn this small fry on.
	fan2.turnOff();
	

	// Display fan properties.

	cout << "Fan 1 is at speed " << fan1.getSpeed() << "." << endl;
	cout << "It has radius " << fan1.getRadius() << " and is turned ";

	// Use short if-then to transfer the bool 'on' to the text "on" or "off".
	if (fan1.isOn()) cout << "on." << endl;
	else cout << "off." << endl;

	// Add some extra aesthetic space.
	cout << endl;

	cout << "Fan 2 is at speed " << fan2.getSpeed() << "." << endl;
	cout << "It has radius " << fan2.getRadius() << " and is turned ";

	// Use short if-then to transfer the bool 'on' to the text "on" or "off".
	if (fan2.isOn()) cout << "on." << endl;
	else cout << "off." << endl;

	
	// Add some extra aesthetic space.
	cout << endl;


	// End function.  Everything is ok!
	return 0;

}