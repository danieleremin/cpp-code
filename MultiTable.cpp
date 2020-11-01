#include <iostream>
using namespace std;

// Calculaate and output multiplication table.
int main() {

	int numbers[10][10];
	
	// Initialize values
	for(int i=1; i<=10; i++) {
		for(int a=1; a<=10; a++) {
			numbers[i][a] = i*a;
		}
	}

	// Output Values

	for(int i=0; i<=10; i++) {
		for(int a=0; i<=10; i++) {
			cout << numbers[i][1] << " ";
			cout << numbers[i][2] << " ";
			cout << numbers[i][3] << " ";
			cout << numbers[i][4] << " ";
			cout << numbers[i][5] << " ";
			cout << numbers[i][6] << " ";
			cout << numbers[i][7] << " ";
			cout << numbers[i][8] << " ";
			cout << numbers[i][9] << " ";
			cout << numbers[i][10] << " ";
			
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;

 return 0;
}
