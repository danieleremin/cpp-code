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

do {

} while(true)

return 0;
}

