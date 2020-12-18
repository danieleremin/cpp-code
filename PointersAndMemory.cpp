#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int value = 3;
  int* pValue = &value;
  
  cout << "Value: " << value << " \n";
  cout << "Value hex adress: " << pValue << " \n";
  cout << "Value via pointer: " << *pValue << " \n";
  return 0;
}