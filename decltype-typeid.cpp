#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	string something;
	
	cout << typeid(something).name() << endl;
	
	decltype(something) name = "Jeff";
	
	cout << name << endl;
	
	return 0;
}
