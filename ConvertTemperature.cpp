// A simple C++ program that converts celsius to fahrenheit.
//

#include <iostream>
using namespace std;


int main()
{
	double celsius = 0.0, fahrenheit = 0.0;
	char tempType;
	
	// Verify with the user if they want to convert celsius or fahrenheit
	cout << "If you are entering a celisius value type \"C\" then press ENTER.\n";
	cout << "If you are entering a fahrenheit value type \"F\" then press ENTER.\n";

	// Store the user input
	cin >> tempType;

	if (tempType == 'C') {
		// Request the temperature in celsuis
		cout << "\nEnter the temperature in Celsius: ";
		// Store the user input
		cin >> celsius;

		// Convert celsius to fahrenheit
		fahrenheit = (celsius * 9 / 5) + 32;
		// Display the result
		cout << "\nThe temperature " << celsius << " celsius, is equivalent to " << fahrenheit << " fahrenheit.\n" << endl;
	}
	else 

		// Request the temperature in fahrenheit
		cout << "\nEnter the temperature in Fahrenheit: ";
		// Store the user input
		cin >> fahrenheit;

		// Convert celsius to fahrenheit
		celsius = (fahrenheit - 32) * 5 / 9;
		// Display the result
		cout << "\nThe temperature " << fahrenheit << " fahrenheit, is equivalent to " << celsius << " celsius.\n" << endl;

	return 0;
}

