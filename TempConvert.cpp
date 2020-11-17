#include <iostream>
using namespace std;

void CtoF() {
	double tempc;
	double tempf;

	// Ask the user
	cout << "Enter the temperature in Celsius " << endl << "> ";

	cin >> tempc;

	// Calculate
	tempf = (tempc / 5) * 9 + 32;

	// Output
	cout << "The temperature is " << tempf << " degrees Farenhiet. \n";
}

void FtoC() {
	double tempf;
	double tempc;

	cout << "Enter the temperature in Farenhiet " << endl << "> ";

	cin >> tempf;


	tempc = (tempf - 32) / 1.8;

	cout << "The temperature is " << tempc << " degrees Celsius.\n";
}

string getInput() {
	string input;
	bool complete = false;

	do {

		cout << " Press F to convert Fahrenheit to Celsius \n Press C to convert Celsius to Fahrenheit \n or Press Q to quit. \n";
		cin >> input;

		if(input == "F" || input == "f") {
			FtoC();
			// Fahrenheit to Celsius
			complete = true;
		}
		else if(input == "C" || input == "c") {
			CtoF();
			// Celsius to Fahrenheit
			complete = true;
		}
		else if(input == "Q" || input == "q") {
			cout << "Goodbye \n";
			// exit
			exit(0);
		}
		else {
			cout << "Invalid input, select something from the menu. \n" << endl;
		}

	} while(complete == false);

	return input;
}

int main() {

getInput();
// getInput() function get selecton and then does the appropriate thing acording to the selection

return 0;
}
