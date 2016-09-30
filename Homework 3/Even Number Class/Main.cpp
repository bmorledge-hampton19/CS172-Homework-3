////////////////
// Ben Morledge-Hampton
// Homework 3
// CS 172-1
// 9/30/2016
////////////////

// Pre-Processor directives
#include "EvenNumber.h"
#include <iostream>
using namespace std;


// Main function.
int main() {

	// Creates an EvenNumber object.
	EvenNumber myEvenNumber(16);

	// Displays the even number and the previous and next even numbers.
	cout << "Your number is " << myEvenNumber.getValue() << "." << endl;
	cout << "The previous even number is " << myEvenNumber.getPrevious() << "." << endl;
	cout << "The next even number is " << myEvenNumber.getNext() << "." << endl;

	// End function. Everything is ok!
	return 0;

}