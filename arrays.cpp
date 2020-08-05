#include <iostream>

using namespace std;

int main() {

	int values[4];

	values[0] = 41;
	values[1] = 25;
	values[2] = 34;
	values[3] = 555;

	cout << values[3] << endl;
	cout << "Full array: " << values << ". \n";

	string words[3] = {"Hi", "Bye", "Something"};
	cout << endl << words[2] << " is the last value of the string array. \n";

	return 0;
}
