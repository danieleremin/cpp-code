#include <iostream>
using namespace std;

int main() {

int numbers[] = {2, 4, 8, 16, 32, 64};

cout << sizeof(numbers) << endl;
cout << sizeof(int) << " is the Sizeof INT (Always the same[unless LONG int]) \n";

for(unsigned int i=0; i < sizeof(numbers)/sizeof(int); i++) {
	cout << numbers[i] << " | ";
}
cout << endl;

return 0;
}
