#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> strings;
	
	strings.push_back("hello");
	strings.push_back("Something else");
	strings.push_back("cat");
	strings.push_back("dog");
	
	// strings[3] = "cat";
	
	cout << strings[1] << endl;
	cout << strings.size() << endl;
	
	/* for(int i=0; i<strings.size(); i++) {
		cout << strings[i] << endl;
	}
	
	// vector<string>::iterator it = strings.begin();
	
	cout << *it << endl;
	it++
	cout << *it << endl; */
	
	for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
		cout << *it << endl;
	}
	
	cout << endl;
	// Vectors and memory
	
	vector<int> numbers(1);
	
	cout << "Size: " << numbers.size() << endl;
	
	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;
	
	for(int i=0; i<10000; i++) {
		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}
	// numbers.clear();
	numbers.resize(100);
	numbers.reserve(100000);
	cout << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << capacity << endl;
	
	// 2D+ Vectors
	cout << endl;
	
	vector< vector<int> > grid(3, vector<int>(4, 5));
	
	grid[1].push_back(8);
	
	for(int row=0; row<grid.size(); row++) {
		for(int col=0; col<grid[row].size(); col++) {
			cout << grid[row][col] << flush;
		}
		cout << endl;
	}
	
	return 0;
}
