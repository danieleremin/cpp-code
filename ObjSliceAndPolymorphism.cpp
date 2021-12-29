#include <iostream>
using namespace std;

class Parent {
private:
	int one;
public:
	Parent(): one(0) {}
	// try using default
	Parent(const Parent &other) {
		one = other.one;
		cout << "Parent copy \n";
	}
	virtual void print() {
		cout << "parent \n";
	}
	virtual ~Parent() {}
};

class Child: public Parent {
private:
	int two;
public:
	Child(): two(0) {}
	void print() {
		cout << "child \n";
	}
};

int main() {
	Child c1;
	Parent &p1 = c1;
	p1.print();
	
	Parent p2 = Child();
	p2.print();
	
	return 0;
}
