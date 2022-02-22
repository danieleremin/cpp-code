#include <iostream>
using namespace std;

int main() {
	// For loops are enchanced
	
	auto texts = {"one", "two", "three"};
	
	for(auto text: texts) {
		cout << text << endl;
	}
	
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(6);
	numbers.push_back(9);
	numbers.push_back(13);
	
	for(auto number: numbers) {
		cout << number << endl;
	}
	
	string hi = "Hello";
	
	for(auto c: hello) {
		cout << c << endl;
	}
	
	return 0;
}
