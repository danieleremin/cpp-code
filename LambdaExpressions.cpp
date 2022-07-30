#include <iostream>
using namespace std;

void test(void (*pFunc())) {
	pFunc();
}

int main() {
	auto func = [](){ cout << "Hello \n"; }; // () can be added to call the expression
	
	func();
	
	test(func);
	
	test([](){ cout << "Hello again \n"; });
	
	return 0; 
}
