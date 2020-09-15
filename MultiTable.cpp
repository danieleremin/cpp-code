#include <iostream>
using namespace std;

// Calculaate and output multiplication table.
int main() {

	int numbers[10][10];
	
	// Initialize values
	for(int i=1; i<=10; i++) {
		for(int a=1; a<=10; a++) {
			cout << "a is: " << a << endl;
			cout << "i is: " << i << endl;
		}
	}

	// Output Values

	for(int i=0; i<=10; i++) {
		for(int a=0; i<=10; i++) {
			cout << numbers[i][a] << " _|_ ";
		}
	}

 return 0;
}
