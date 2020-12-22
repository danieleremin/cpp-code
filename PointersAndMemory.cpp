#include <iostream>
#include <sstream>
using namespace std;

void manipulate(int* value) {
  cout << "2. value in manipulate: " << *value << endl;
  *value = 10;
  cout << "3. value in manipulate: " << *value << endl;
}
void change2(&double value) {
  cout << "Before change" << value << endl;
  value = 43.21;
  // Second cout in main function
}
int main() {
  int value1 = 3;
  int* pValue1 = &value1;
  
  cout << "Value1: " << value1 << " \n";
  cout << "Value1 hex adress: " << pValue1 << " \n";
  cout << "Value1 via pointer: " << *pValue1 << " \n";
  
  cout << "==================== \n";
  
  int value2 = 1234;
  cout << "1. value2: " << value2 << endl;
  manipulate(&value2);
  cout << "4. value2: " << value2 << endl;
  
  double value3 = 12.34;
  cout << "You can also change using the & symbol \n";
  change2(value3);
  cout << "After change: " << value << endl;
  return 0;
}
