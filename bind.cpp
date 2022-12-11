#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test {
public:
	int add(int a, int b, int c) {
	cout << a << ", " << b << ", " << c << " \n";
	return a + b + c;
}
};

int run(function<int(int, int) func>) {
	return func(7,3);
}

int main() {
	
	Test test;
	
	cout << add(1, 2, 3) << endl;
	auto calculate = bind(&Test::add, test, _2, 10, _3);
	
	// cout << calculate(10, 20, 30) << endl;
	cout << run(calculate) << endl;
	
	return 0;
}
