#include <iostream>
#include <unistd.h>
using namespace std;

void CtoF() {
	// This converts Celsius to Fahrenheit and then outputs the result
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

}

int main() {

do {

} while(true)

return 0;
}

