#include <iostream>
using namespace std;

int main() {

	int numbers[11][11];
	
	// Initialize values
	for(int i=1; i<=10; i++) {
		for(int a=1; a<=10; a++) {
			numbers[i][a] = i*a;
		}
	}

	// Output Values
	for(int i=1; i<=10; i++) {
		for(int a=1; a<=10; a++) {
			cout << numbers[i][a] << " ";
		}
		cout << endl;
	}

 return 0;
}
