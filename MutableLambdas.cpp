#include <iostream>
using namespace std;

int main() {
	int cats = 5;
	
	[cats]() mutable{
		cats = 8;
		cout << cats << endl;
	}();
	
	cout << cats << endl;
	
	return 0;
}
