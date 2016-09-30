////////////////
// Ben Morledge-Hampton
// Homework 3
// CS 172-1
// 9/30/2016
////////////////


// Pre-Processor Directives
#include "QuadraticEquation.h"
#include <iostream>
using namespace std;


// Main Function
int main() {

	// Variables to be used in the quadratic equation.
	int a = 0;
	int b = 0;
	int c = 0;

	// Get values for the three above variables from the user.
	cout << "Input variables a, b, and c for the quadratic equation: " << endl;
	cin >> a >> b >> c;

	// Create the QuadraticEquation class.
	QuadraticEquation myQuadratic(a,b,c);


	// Tell the user what the descriminant is.
	cout << "The descriminant for your equation is " << myQuadratic.getDiscriminant() << "." << endl;


	// Display the possible solution(s) for their equation to the user based on the discriminant, or state that there are none.
	if (myQuadratic.getDiscriminant() < 0) {
		cout << "Your descriminant is negative, so your the equation has no solutions." << endl;
	}
	else if (myQuadratic.getDiscriminant() == 0) {
		cout << "Your descriminant is 0, so the equation has one solution:" << endl;
		cout << myQuadratic.getRoot1() << endl;
	}
	else {
		cout << "Your descriminant is positive, so the equation has the following solutions:" << endl;
		cout << myQuadratic.getRoot1() << endl;
		cout << myQuadratic.getRoot2() << endl;
	}

	// End function.  Everything is ok!
	return 0;

}