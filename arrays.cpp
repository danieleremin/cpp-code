#include <iostream>

using namespace std;

int main() {

	int ints[4];

	ints[0] = 41;
	ints[1] = 25;
	ints[2] = 34;
	ints[3] = 555;
	
	int valueCOUNT = 0;
	for(int i=0; i<4; i++) {
		cout << "Value " << valueCOUNT << " of array: " << ints[i] << endl;
		valueCOUNT++;
	}

	cout << "Full array: " << ints << ". \n";

	string words[3] = {"Hi", "Bye", "Something"};
	cout << endl << words[2] << " is the last value of the string array. \n";

	return 0;
}
