#include <iostream>

using namespace std;

int main() {

const string passcode = "Hello";

cout << "Enter your password > " << flush;

string input;
cin >> input;

while(input != passcode) {
cout << "Access denied: Password Incorrect. \n";

cout << "Enter your password > " << flush;

cin >> input;
}

cout << "Password Correct. \n";

	return 0;
}
