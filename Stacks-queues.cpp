#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
	string name;
public:	
	Test(string name) : name(name) {}
	virtual ~Test() {
		// cout << "Object destroyed \n";
	}
	void print() {
		cout << name << endl;
	}
};

int main() {
	// LFIO
	stack<Test> testStack;
	
	testStack.push(Test("Mike"));
	testStack.push(Test("Joe"));
	testStack.push(Test("Bob"));
	
	Test &test1 = testStack.top();
	test1.print();
	
	testStack.pop();
	
	Test test2 = testStack.top();
	test2.print();
	
	while(testStack.size() > 0) {
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}
	
	// FIFO
	queue<Test> testQueue;
	
	testQueue.push(Test("Mike"));
	testQueue.push(Test("Joe"));
	testQueue.push(Test("Bob"));
	
	Test &test1 = testQueue.front();
	test1.print();
	
	testQueue.pop();
	
	Test test2 = testQueue.front();
	test2.print();
	
	while(testQueue.size() > 0) {
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}
	
	testQueue.back().print();
	
	return 0;
}
// Don't forget to commit to repository (remove this comment later).