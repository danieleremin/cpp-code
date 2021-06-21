#include <iostream>
using namespace std;

class Test {
private:
	int id;
	string name;
public:
	Test(): id(0), name("") {}
	Test(int id, string name): id(id), name(name) {}
	
	void print() {
		cout << id << ": " << name << endl;
	}
	const Test&operator=(const Test &other) {
		cout << "Assignment running \n";
		
		id = other.id;
		name = other.name;
		
		return *this;
	}
	Test(const Test &other) {
		/* id = other.id;
		name = other.name; */
		*this = other;
		cout << "Copy constructor running \n";
	}
};

int main() {
	Test test1(10, "Mike");
	test1.print();
	
	Test test2(20, "Bob");
	test2.print();
	
	test2 = test1;
	test2.print();
	
	Test test3;
	// test3 = test2 = test1;
	
	test3.operator=(test2); // Same as test2 = test2
	test3.print();
	
	// Copy initialization
	Test test4 = test1;
	test4.print();
	
	return 0;
}
