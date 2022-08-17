#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
	Test() {
		cout << "constructor \n";
	}
	Test(int i) {
		cout << "parameterized constructor \n";
	}
	Test(const Test &other) {
		cout << "copy constructor \n"
	}
	Test &operator=(const Test &other) {
		cout << "assignment \n";
		return *this;
	}
	~Test() {
		cout << "destructor \n";
	}
	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main() {
	
	Test test1 = getTest();
	
	cout << test1 << endl;
	
	vector<Test> vec;
	vec.push_back(Test());
	
	return 0;
}
