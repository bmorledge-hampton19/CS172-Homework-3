#include "MyInteger.h"
#include <cmath>
using namespace std;

MyInteger::MyInteger(int newValue)
{
	value = newValue;
}


const int MyInteger::getValue()
{
	return value;
}



bool MyInteger::isEven() const
{
	return isEven(value);
}

bool MyInteger::isOdd() const
{
	return isOdd(value);
}

bool MyInteger::isPrime() const
{
	return isPrime(value);
}


bool MyInteger::isEven(int checkThis)
{
	if (checkThis % 2 == 0) return true;
	else return false;
}

bool MyInteger::isOdd(int checkThis)
{
	if (checkThis % 2 == 0) return false;
	else return true;
}

bool MyInteger::isPrime(int checkThis)
{
	
	// Check all the integers from 2 until checkThis's square root for divisibility with %.
	// This should catch at least 1 divisor (if there are any other than 1 and checkThis) as any greater than the root will have a a partner divisor less than the root.
	// Return false if a divisor is found at any point.  Else, return true.
	for (int i = 2; i <= static_cast<int>(sqrt(checkThis)); i++) {

		if (checkThis%i == 0) return false;

	}
	
	return true;



}


bool MyInteger::isEven(const MyInteger & checkThis)
{
	return isEven(checkThis.value);
}

bool MyInteger::isOdd(const MyInteger & checkThis)
{
	return isOdd(checkThis.value);
}

bool MyInteger::isPrime(const MyInteger & checkThis)
{
	return isPrime(checkThis.value);
}


bool MyInteger::equals(int checkThis) const
{
	return (checkThis == value);
}

bool MyInteger::equals(const MyInteger & checkThis) const
{
	return (checkThis.value == value);
}


int MyInteger::parseInt(const string & parseThis)
{
	
	// The running total.
	int parseTotal = 0;

	// Add each of the strings individual characters to running total, and then return it.
	for (int i = 0; i < parseThis.length(); i++) {
		parseTotal += parseThis.at(i);
	}

	return parseTotal;

}
