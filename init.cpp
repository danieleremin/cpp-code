#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
public:
	Test(initializer_list<string> texts) {
		for(auto value: texts) {
			cout << value << endl;
		}
	}
	void print(initializer_list<string> texts) {
		for(auto value: texts) {
			cout << value: texts;
		}
	}
};

int main() {
	int value{5};
	cout << value << endl;
	
	string text{"Hello"};
	cout << text << endl;
	
	int numbers[]{1, 2, 4};
	cout << numbers[1] << endl;
	
	int *pInts = new int[3]{1, 2, 3};
	cout << pInts[1] << endl;
	delete pInts;

	int value1{};
	cout << value1 << endl;
	
	int *pSomething{nullptr}; // pointer can be initialized using &value or can be left blank for null pointer
	cout << *pSomething << endl;
	
	int numbers1[5]{};
	cout << numbers1[1] << endl;	
	
	struct {
		int value;
		string text;
	} s1 = {5, "Hi"};
	cout << s1.text << endl;
	cout << s1.value << endl;
	
	vector<string> strings{"one", "two", "three"};
	cout << strings[2] << endl;
	
	// initializer lists
	
	vector<int> numbers2 { 1, 3, 4, 6 };
	cout << numbers2[2] << endl;
	
	Test test{"apple", "banana", "orange"};
	
	test.print({"one", "two", "three", "four"});
	
	return 0;
}
