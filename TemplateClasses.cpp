#include <iostream>
using namespace std;

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

int main() {
	Test<string, int> test1("Hello", 13);
	test1.print();
	
	return 0;
}
