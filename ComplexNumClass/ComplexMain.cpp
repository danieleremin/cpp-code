#include <iostream>
#include "Complex.hpp"

using namespace std;
using namespace de;

int main() {

	Complex c1(2, 3);
	Complex c2(c1);

	Complex c3 = c2;

	c2 = c1;

	cout << c2 << ": " << c3 << endl;

	return 0;
}
