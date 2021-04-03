#ifndef GO_WRONG_H
#define GO_WRONG_H

#include <exception>

class CanGoWrong {
public:
	CanGoWrong() {
		char* pMemory = new char[999999999999999999];
		// This won't work for me because this is the maximum that my IDE allows. With this ammount the new exception doesn't happen because there is enough space in my computer RAM for it (I have 16GB).
		delete[] pMemory;
	}
};
class MyException: public std::exception {
public:
	virtual const char* what() const throw() {
		return "Something bad happened.";
	}
};
class Test {
public:
	void goesWrong() { throw MyException(); }
};

#endif /* GO_WRONG_H */
