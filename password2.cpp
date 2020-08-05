#include <iostream>

using namespace std;

int main() {

const string passcode = "Hello";
string input;
	
do {
	cout << "Enter your password > " << flush;
	cin >> input;
	
	if(input == passcode) {
	 cout << "Password Correct. \n";
	 break;
	}
	else {
	cout << "Access denied: Password Incorrect. \n";
	}
	
} while(true);

	return 0;
}
