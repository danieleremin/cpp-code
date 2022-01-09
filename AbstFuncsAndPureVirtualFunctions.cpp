#include <iostream>
using namespace std;

class Animal {
public:
	virtual void run()=0;
	virtual void speak() = 0;
};

class Dog: public Animal {
public:
	virtual void speak() {
		cout << "Woof! \n";
	}
};

class Labrador: public Dog {	
public:
	Labrador() {
		cout << "new labrador \n";
	}
	virtual void run() {
		cout << "Labrador running \n";
	}
};

void test(Animal &a) {
	a.run();
}

int main() {
	
	// Animal animal
	
	// Dog or Animal won't work
	/* Dog dog;
	dog.speak(); */
	Labrador lab;
	lab.run();
	lab.speak();
	
	Labrador labs[5];
	
	// pointers work
	Animal *animals[5];
	animals[0] = &lab;
	
	animals[0]->speak();
	
	test(lab);
	
	return 0;
}
