#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE=100;
	int *pBuffer;
public:
	Test() {
		cout << "constructor \n";
		pBuffer = new int[SIZE]{};
		// memset(pBuffer, 0, sizeof(int)*SIZE);
	} 
	Test(int i) {
		cout << "parameterized constructor \n";
		pBuffer = new int[SIZE]{};
		
		for(int i=0; i<SIZE; i++) {
			pBuffer[i] = 7*1;
		}
	}
	Test(const Test &other) {
		cout << "copy constructor \n";
		
		pBuffer = new int[SIZE]{};
		memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int));
	}
	Test &operator=(const Test &other) {
		cout << "assignment \n";
		pBuffer = new int[SIZE]{};
		memcpy(pBuffer, other.pBuffer, SIZE*sizeof(int));
		
		return *this;
	}
	~Test() {
		cout << "destructor \n";
		
		delete [] pBuffer;
	}
	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

void check(const Test &value) {
	cout << "lValue function! \n";
}

void check(Test &&value) {
	cout << "rValue function! \n";
}

int main() {
	
	Test test1 = getTest();
	
	cout << test1 << endl;
	
	vector<Test> vec;
	vec.push_back(Test());
	
	// Rvalue (commented code won't work)
	int value1 = 7;
	int *pValue1 = &value1;
	// int *pValue2 = &7;
	
	Test *pTest1 = &test1;
	// Test *pTest2 = &getTest();
	
	int *pValue3 = &++value1;
	cout << *pValue3 << endl;
	
	// int *pValue4 = &value1++;
	
	// int *s = &(7 + value1); 
	
	// -------------------------
	// Lvalue references
	
	Test &rTest1 = test1;
	// Test &rTest2 = getTest();
	
	const Test &rTest2 = getTest();
	
	Test test2(Test(1));
	
	// Rvalue References
	
	Test &ltest1 = test1;
	Test &&rtest1 = getTest(); // Test() can be used
	
	check(test1);
	check(getTest());
	
	return 0;
}
