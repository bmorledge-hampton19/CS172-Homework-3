////////////////
// Ben Morledge-Hampton
// Homework 3
// CS 172-1
// 9/30/2016
////////////////

//Pre-Processor Directives
#include <string>
#include <iostream>
using namespace std;

// A function that, given a string, returns that string sorted in alphabetical order.
string sort(string& s);

// Main function
int main() {

	// The string to be sorted.
	string sortableString;

	// Prompt the user to enter a string and call the sort function for that string.
	cout << "Give a string to be sorted: ";
	cin >> sortableString;

	sort(sortableString);

	// Display the sorted string.

	cout << "Your string sorted alphabetically is " << sortableString << "." << endl;

	// End function.  Everything is ok!
	return 0;

}


string sort(string& s) {
	
	

	// The highest value character in a string for the current sort and its position in the string.
	char highestValueChar;
	int highestValuePos;

	// Two for loops in a nest will sort the string.
	// The first loop determines the starting point for the sort which will increment each time the second loop finds the highest nonsorted character and moves it to the front of the string.

	for (int i = 0; i < s.length; i++) {

		// Set the first unsorted character as the default highestValue.
		highestValueChar = s.at(i);
		highestValuePos = i;

		for (int j = i+1; j < s.length; j++) {

			// Determine the highest value nonsorted character (as lowercase) in the string by checking each character with the highest value so far, and replacing that value if necesarry.
			if (tolower(highestValueChar) < tolower(s.at(j))) {
				highestValueChar = s.at(j);
				highestValuePos = j;
			}


		}

		// Move the highest value character to the front of the string.
		s.erase(highestValuePos, 1);
		s = highestValueChar + s;

	}

}