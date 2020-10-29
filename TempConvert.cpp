#include <iostream>
#include <unistd.h>
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

	usleep(5000000);
}

void FtoC() {
	double tempf;
	double tempc;
  
	cout << "Enter the temperature in Farenhiet " << endl << "> ";

	cin >> tempf;
  
  
	tempc = (tempf - 32) / 1.8;

	cout << "The temperature is " << tempc << " degrees Celsius.\n";
    
	usleep(5000000);

}

int main() {

bool complete = false;

do {

	int input;

	cout << " Press 1 to convert Fahrenheit to Celsius \n Press 2 to convert Celsius to Fahrenheit \n or Press 0 to quit. \n";
	cin >> input;

	switch(input) {
		case 1:
			FtoC();
			complete = true;
			break;
		case 2:
			CtoF();
			complete = true;
			break;
		case 0:
			cout << "Goodbye. \n";
			exit(0);
			break;
		default:
			cout << "Invalid entry, Please enter something from the list. \n";
			cout << " Press F to convert Fahrenheit to Celsius \n Press C to convert Celsius to Fahrenheit \n or Press Q to quit. \n";
	}


} while(complete == false);

return 0;
}

