#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> numbers;
	
	numbers.insert(50);
	numbers.insert(30);
	numbers.insert(10);
	numbers.insert(30);
	numbers.insert(20);
	
	for(set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		cout << *it << endl;
	}
	
	set<int>::iterator itFind = fumbers.find(30);
	if(itFind != numbers.end()) {
		cout << "Found: " << *itFind << endl;
	}
	else {
		cout << "Not found \n";
	}
	if(numbers.count(20)) {
		cout << "Number found. \n";
	}
	
	return 0;
}
