#include "Complex.h"
using namespace std;
using namespace de;

int main() {
	Complex c1(2, 4);
	
	cout << c1 + *Complex(-4, 3) << endl;
}
