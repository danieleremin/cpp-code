#include <iostream>
using namespace std;

void testGreet() {
	greet("Bob");
}

void runDivide(double (*divide)(double a, double b) ) {
	auto rval = divide(9,3);
	cout << rval << endl;
}

int main() {
	auto pGreet = [](string name){ cout << "Hello " << name << endl; };
	
	pGreet("Mike");
	
	testGreet(pGreet);
	
	auto pDivide = [](double a, double b) -> double {
		
		if(b == 0.0) {
			return 1;
		}
		
		return a/b;
	}; // Division calculator!
	
	cout << pDivide(10.0, 5.0) << endl;
	cout << pDivide(1.0, 0.0) << endl;
	
	runDivide(pDivide);
	
	return 0;
}
