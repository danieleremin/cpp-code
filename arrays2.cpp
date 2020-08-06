#include <iostream>

using namespace std;

int main() {

int numbers[11] = {};
  int value = 2;
  for(int i=0; i<11; i++) {
    numbers[i] = value;
    value = value * 2;
  }
  
  for(int i=0; i<11; i++) {
   cout << "The powers of ten from 2 to 2048 are: " << numbers[i] << endl; 
  }

return 0;
}
