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
		for(int a=1; i<=10; i++) {
			// cout << numbers[i][0] << " ";
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

 return 0;
}
