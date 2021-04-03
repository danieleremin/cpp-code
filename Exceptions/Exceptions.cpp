#include <iostream>
#include "Classes.h"
using namespace std;

void possibleError() {
	// Error check here
	bool error1 = false;
	bool error2 = true;
	bool error3 = false;

	if (error1) {
		throw "Error 1";
	}
	if (error2) {
		throw string("Something else went wrong.");
	}
	if (error3) { throw 3; }
}

void usesPossibleError() { possibleError(); }

int main() {

	try {
		usesPossibleError();
	}
	catch (int e) {
		cout << "Error code: " << e << endl;
	}
	catch (char const* e) {
		cout << "Error message: " << e << endl;
	}
	catch (string &e) {
		cout << "string error message: " << e << endl;
	}
	try { CanGoWrong error; }
	catch (bad_alloc& e) { cout << "Caught Exception " << e.what() << endl; }

	Test test;
	try { test.goesWrong(); }
	catch (MyException& e) {
		cout << e.what() << endl;
	}

	cout << "Program still running \n";
	return 0;
}
