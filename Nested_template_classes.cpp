#include <iostream>
using namespace std;
// Normally there would be a header file but I'm too laze to create one + folder stuff annoying

// typename can be used
template<class T>
class ring {
public:
	class iterator;
};

class ring::iterator {
public:
	void print() {
		cout << "Hello from iterator \n";
	}
};

/* void ring::iterator::print() {
	cout << "Hello from iterator \n";
} */

int main() {
	
	ring::iterator it;
	
	it.print();
	
	/* ring<string> textring(3);
	
	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four"); 
	for(int i=0; i<textring.size(); i++) {
		cout << textring.get(i) << endl;
	}
	Output should be 
	* four
	* one
	* two
	*/
	
	
	
	return 0;
}
