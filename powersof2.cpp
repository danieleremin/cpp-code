#include <iostream>
using namespace std;

int main() {
  
int numbers[12] = {};
  int value = 2;
  for(int i=0; i<12; i++) {
    numbers[i] = value;
    value = value * 2;
  }
  
  // Output values
  for(int i=0; i<12; i++) {
   cout << "2 to the power of "<< i+1 << " is: " << numbers[i] << endl; 
  }

return 0;
}