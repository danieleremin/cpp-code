#include "Complex.h"
using namespace std;
using namespace de;

int main() {
	Complex c1(3,2);
	Complex c2(3,5); // 3, 2
	
	if(c1 == c2) {
		cout << "Equal \n";
	}
	else {
		cout << "Not equal \n";
	}
	if(c1 != c2) {
		cout << "Not equal \n";
	}
	else {
		cout << "Equal \n";
	}
}
