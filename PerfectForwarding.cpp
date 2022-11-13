#include <iostream>
using namespace std;

class Test {
	
};

template<typename T>
void call(T &&arg) {
		check(static_cast<T>arg); // If the static_cast is removed lvalue will be used
}

void check(Test &test) {
	cout << "lvalue \n";
}

void check(Test &&ttest) {
	cout << "rvalue \n";
}

int main() {
	Test test
	// auto &&t = test;
	
	call(Test());
}
