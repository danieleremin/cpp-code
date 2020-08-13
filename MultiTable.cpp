#include <iostream>
using namespace std;

// Calculaate and output multiplication table.
int main() {

	int numbers[10][10];
	
	// Initialize values
	for(int i=1; i<=10; i++) {
		for(int a=1; a<=10; a++) {
			numbers[i][a] = 1*i;
			numbers[i][a] = 2*i;
			numbers[i][a] = 3*i;
			numbers[i][a] = 4*i;
			numbers[i][a] = 5*i;
			numbers[i][a] = 6*i;
			numbers[i][a] = 7*i;
			numbers[i][a] = 8*i;
			numbers[i][a] = 9*i;
			numbers[i][a] = 10*i;
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
