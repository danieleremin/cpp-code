#include <iostream>
using namespace std;

int main() {
// This will calculate the powers of two from 1 to 11 using a for loop and an array
  
int numbers[11] = {};
  int value = 2;
  for(int i=0; i<11; i++) {
    numbers[i] = value;
    value = value * 2;
  }
  
  // Output values
  for(int i=0; i<11; i++) {
   cout << "2 to the power of "<< i+1 << " is: " << numbers[i] << endl; 
  }

return 0;
}
