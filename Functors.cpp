#include <iostream>
using namespace std;

struct MatchTest {
	/* bool operator()(string &text) {
		return text == "lion";
	} */
	virtual bool operator()(string &text)=0;
	virtual ~Test(){}
};

void check(string text, Test &test) {
	if(test(text)) {
		cout << "Text matches! \n";
	}
	else {
		cout << "No Match. \n";
	}
}

int main() {
	
	MatchTest pred;
	
	string value = "lion"; // Not matching = 0 Matching = 1
	
	cout << pred(value) << endl;
	
	MatchTest m;
	check("lion-n", m);
	
	return 0;
}
