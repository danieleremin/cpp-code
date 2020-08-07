#include <iostream>
using namespace std;

int main() {

  // calculate values
int numbers[15] = {};
  int value = 2;
  for(int i=0; i<15; i++) {
    numbers[i] = value;
    value = value * 2;
  }
  
  // Output values
  for(int i=0; i<15; i++) {
   cout << "2 to the power of "<< i+1 << " is: " << numbers[i] << endl; 
  }

return 0;
}