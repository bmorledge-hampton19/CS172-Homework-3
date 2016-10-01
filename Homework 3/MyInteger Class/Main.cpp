////////////////
// Ben Morledge-Hampton
// Homework 3
// CS 172-1
// 9/30/2016
////////////////

// Pre-Processor Directives
#include "MyInteger.h"
#include <iostream>
#include <string>
using namespace std;

// Main function
int main() {

	// Integers (and a string) to use for testing the MyInteger Class
	int testInt1, testInt2, testInt3, testInt4, testInt5, testInt6, testInt7;
	string testString;

	// Receive input for the testing variables.

	cout << "Gimme 7 integers!" << endl;
	cin >> testInt1 >> testInt2 >> testInt3 >> testInt4 >> testInt5 >> testInt6 >> testInt7;

	cout << "Now give me a string!" << endl;
	cin.ignore();
	getline(cin, testString);

	// Start testing all the methods for MyInteger! Ready set go!


	// Instance function tests. (Even, Odd, Prime)
	MyInteger testClass1(testInt1);

	cout << testClass1.getValue() << " is even: " << boolalpha << testClass1.isEven() << endl;
	cout << testClass1.getValue() << " is odd: " << boolalpha << testClass1.isOdd() << endl;
	cout << testClass1.getValue() << " is prime: " << boolalpha << testClass1.isPrime() << endl << endl;


	// Static function tests with integer parameter. (Even, Odd, Prime)
	cout << testInt2 << " is even: " << boolalpha << MyInteger::isEven(testInt2) << endl;
	cout << testInt2 << " is odd: " << boolalpha << MyInteger::isOdd(testInt2) << endl;
	cout << testInt2 << " is prime: " << boolalpha << MyInteger::isPrime(testInt2) << endl << endl;


	// Static function tests with MyInteger parameter. (Even, Odd, Prime)
	MyInteger testClass2(testInt3);

	cout << testClass2.getValue() << " is even: " << boolalpha << MyInteger::isEven(testClass2) << endl;
	cout << testClass2.getValue() << " is odd: " << boolalpha << MyInteger::isOdd(testClass2) << endl;
	cout << testClass2.getValue() << " is prime: " << boolalpha << MyInteger::isPrime(testClass2) << endl << endl;


	// Instance equality test function with integer parameter.
	MyInteger testClass3(testInt4);

	cout << testClass3.getValue() << " is equal to " << testInt5 << ": " << boolalpha << testClass3.equals(testInt5) << endl;


	// Instance equality test function with MyInteger parameter.
	MyInteger testClass4(testInt6);
	MyInteger testClass5(testInt7);

	cout << testClass4.getValue() << " is equal to " << testClass5.getValue() << ": " << boolalpha << testClass4.equals(testClass5) << endl;
	

	// Test parseInt

	cout << "The string \"" << testString << "\" is converted to the integer " << MyInteger::parseInt(testString) << "." << endl << endl;


	// End function.  Everything is ok!
	return 0;
}