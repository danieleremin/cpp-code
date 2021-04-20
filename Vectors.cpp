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
	
	return 0;
}
