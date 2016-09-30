#pragma once

class QuadraticEquation {

private:

	// Three values to be used in the quadratic equation.  a is not permitted to be 0 and will be defaulted to 1 if necesarry.
	double a;
	double b;
	double c;

public:

	// Constructor that requires the user to input the three variables.
	QuadraticEquation(double newA, double newB, double newC);

	// Three getters that return the class's three variables.
	double getA();
	double getB();
	double getC();

	// Uses part of the quadratic equation to return the discriminant.
	double getDiscriminant();

	// Displays the answer to the quadratic equation by adding the square root of the discriminant.
	// Displays 0 if the discriminant is negative.
	double getRoot1();

	// Displays the answer to the quadratic equation by subtracting the square root of the discriminant.
	// Displays 0 if the discriminant is negative.
	double getRoot2();

};