#include <iostream>
using namespace std;

int main() {
// Multidimensional arrays and nested for loop practice.

	string animals[2][3] = {
		 {"fox", "cat", "dog"},
		 {"mouse", "squirrel", "rabbit"},
	};
	cout << "List of animals: \n";
	for(int i=0; i<2; i++) {
		for(int a=0; a<3; a++) {
			cout << animals[i][a] << ", " << flush;
		}
		cout << endl;
	}

return 0;
}
