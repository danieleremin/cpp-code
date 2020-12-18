#include <iostream>
#include <sstream>
using namespace std;

void manipulate(int value) {
  value = 10;
  cout << "value of int in manipulate: " << value << endl;
}

int main() {
  int value1 = 3;
  int* pValue1 = &value1;
  
  cout << "Value1: " << value1 << " \n";
  cout << "Value1 hex adress: " << pValue1 << " \n";
  cout << "Value1 via pointer: " << *pValue1 << " \n";
  
  int value2 = 1234;
  cout << "1. value2: " << value2 << endl;
  manipulate(value2);
  cout << "2. value2: " << value2 << endl;
  return 0;
}