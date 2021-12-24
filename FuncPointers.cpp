#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void test(int value) {
	cout << "Number: " << value << endl;
}

bool match(string test) {
	// return test == "two";
	return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*match)(string test) ) {
	int tally = 0;
	for(int i=0; i<texts.size(); i++) {
		if(match(texts[i])) {
			tally++;
		}
	}
	return tally;
}

int main() {
	test(5);
	
	void (*pTest)(int) = test;
	// & is not required for function
	
	pTest(6);
	// * is not required for function
	
	// Using function pointers
	
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");
	
	cout << match("one") << endl;
	
	cout << count_if(texts.begin(), texts.end(), match) << endl;
	
	cout << countStrings(texts, match << endl;
	
	return 0;
}
