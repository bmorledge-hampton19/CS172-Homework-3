#pragma once
#include <string>
using namespace std;

class MyInteger {

private:

	// The value for MyInteger
	int value;

public:

	// Creates a "MyInteger" with the specified value.
	MyInteger(int newValue);

	// Basic getter.
	const int getValue();


	// Returns true if the value is even.
	bool isEven() const;

	// Returns true if the value is odd.
	bool isOdd() const;

	// Returns true if the value is prime.
	bool isPrime() const;


	// Returns true if the given integer is even.
	static bool isEven(int checkThis);

	// Returns true if the given integer is odd.
	static bool isOdd(int checkThis);

	// Returns true if the given integer is prime.
	static bool isPrime(int checkThis);


	// Returns true if the given "MyInteger" is even.
	static bool isEven(const MyInteger& checkThis);

	// Returns true if the given "MyInteger" is odd.
	static bool isOdd(const MyInteger& checkThis);

	// Returns true if the given "MyInteger" is prime.
	static bool isPrime(const MyInteger& checkThis);


	// Retruns true if the given integer is equal to the value in the MyInteger object.
	bool equals(int checkThis) const;

	// Retruns true if the given "MyInteger" is equal to the value in the function's MyInteger object.
	bool equals(const MyInteger& checkThis);


	// Converts a string to an integer that is the sum of its characters.
	static int parseInt(const string& parseThis);

};