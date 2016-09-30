#pragma once

class EvenNumber {

private:

	// The even Number
	int value;

public:

	// Default Constructor.  Makes the value of the even number 0.
	EvenNumber();

	// Constructor that allows the user to set the number's value.
	// If the value selected is not even, it defaults to 0.
	EvenNumber(int numberValue);

	// Basic Getter.
	int getValue();

	// Returns the next even number after the current number.
	int getNext();

	// Returns the previous even number before the current number.
	int getPrevious();

};