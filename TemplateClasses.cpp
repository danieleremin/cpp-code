#include <iostream>
using namespace std;

// Template class
template<class T, class K>
class Test {
private:
	T obj;
	K obj2;
public: 
	Test(T obj, K obj2) {
		this->obj = obj;
		this->obj2 = obj2;
	}
	void print() {
		cout << obj << " " << obj2 << endl;
	}
};
// Template Function
template<typename T>
void print(T a) {
	cout << "Template version: " << a << endl;
}
void print(int value) {
	cout << "Non-template version: " << value << endl;
}
template<class T>
void show() {
	cout << T() << endl;
}

int main() {
	//Template Class
	Test<string, int> test1("Hi", 13);
	test1.print();
	
	// Template Function
	// print<string>("Hello there \n");
	print("Hello there");
	print<int>(5);
	
	print(5);
	print<>(6);
	
	show<double>();
	
	return 0;
}
