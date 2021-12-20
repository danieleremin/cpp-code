#include <iostream>
using namespace std;

void test(int value) {
	cout << "Hello" << value << endl;
}

int main() {
	test(5);
	
	void (*pTest)(int)();
	pTest = test;
	// & is not required for function
	
	pTest(6);
	// * is not required for function
	
	return 0;
}
