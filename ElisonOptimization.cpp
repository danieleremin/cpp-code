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
		_pBuffer = new int[SIZE]{};
		// memset(_pBuffer, 0, sizeof(int)*SIZE);
	} 
	Test(int i) {
		cout << "parameterized constructor \n";
		_pBuffer = new int[SIZE]{};
		
		for(int i=0; i<SIZE; i++) {
			_pBuffer[i] = 7*1;
		}
	}
	Test(const Test &other) {
		cout << "copy constructor \n";
		
		_pBuffer = new int[SIZE]{};
		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
	}
	Test &operator=(const Test &other) {
		cout << "assignment \n";
		_pBuffer = new int[SIZE]{};
		memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
		
		return *this;
	}
	~Test() {
		cout << "destructor \n";
		
		delete [] _pBuffer;
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

int main() {
	
	Test test1 = getTest();
	
	cout << test1 << endl;
	
	vector<Test> vec;
	vec.push_back(Test());
	
	return 0;
}
