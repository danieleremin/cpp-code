#include <iostream>
using namespace std;

class Parent {
public:
	void speak() {
		cout << "Hi from parent \n";
	}
};

class Brother: public Parent {
	
};

class Sister: public Parent {
	
};

int main() {
	
	Parent parent;
	Brother brother;
	
	Parent *ppb = &brother;
	
	Brother *pbb = static_cast<Brother *>(ppb);
	cout << ppb << endl;
	
	Parent &&p = static_cast<Parent &&>(Parent); // Parent() can be used
	p.speak();
	
	/* float value = 3.23;
	cout << static_cast<int>(value) << endl; */
	
	/* Parent *pp = &brother;
	Brother *pb = static_cast<Brother *>(&parent);
	cout << pb << endl; */
	
	return 0;
}
