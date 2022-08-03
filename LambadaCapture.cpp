#include <iostream>
using namespace std;

class Test {
private:
	int one{1};
	int two{2};
public:
	void run() {
		int three{3};
		int four = 4;
		
		// = won't work
		auto pLambda = [this, &](){
			one = 11;
			cout << one << endl;
			cout << two << endl;
			
			cout << three << endl;
			cout << four << endl;
		};
		pLambda();
	}
};

int main() {
	int one = 1;
	int two = 2;
	int three = 3;
	
	// Capture one and two by value
	[one, two](){ cout << one << ", " << two << endl;; }();
	
	// Capture all local variables by value
	[=](){ cout << one << ", " << two << endl;; }();
	
	// Capture all local variables by value, but capture three by reference
	[=, &three](){ three=7; cout << one << ", " << two << endl;; }();
	cout << three << endl;
	
	// Capture all local variables reference
	[&](){ three=7; two=4; cout << one << ", " << two << endl;; }();
	cout << two << endl;
	
	// Capture all local variables reference, but two by value
	[&, two](){ three=7; cout << one << ", " << two << endl;; }();
	cout << two << endl;
	cout << three << endl;
	
	// Capturing this
	
	Test test;
	test.run;
	
	return 0;
}
