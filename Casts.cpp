#include <iostream>
using namespace std;

class Parent {
public:
	virtual void speak() {
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
	Sister sister;
	
	Parent *ppb = &brother;
	
	Sister *pbb = reinterpret_cast<Sister *>(ppb); // Static cast can be used, reinterpret cast is rarely used
	
	Brother *pbb = dynamic_cast<Brother *>(ppb);
	if(pbb == nullptr) {
		cout << "Invalid cast \n";
	}
	else {
	cout << ppb << endl;
	}
	
	Parent &&p = static_cast<Parent &&>(Parent()); // Parent can be used sometimes
	p.speak();
	
	/* float value = 3.23;
	cout << static_cast<int>(value) << endl; */
	
	/* Parent *pp = &brother;
	Brother *pb = static_cast<Brother *>(&parent);
	cout << pb << endl; */
	
	// When commiting to github make the summary Dynamic cast
	
	return 0;
}
