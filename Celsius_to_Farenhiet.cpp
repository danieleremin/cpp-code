#include <iostream>
#include <unistd.h>
using namespace std;

// This converts Celsius to Farenhiet and then outputs it
int main() {
  
  double tempc;
  double tempf;
  
  // Ask the user
  cout << "Enter the temperature in Celsius \n > ";

 cin >> tempc;
  
  // Calculate
  tempf = (tempc / 5) * 9 + 32;
  
  // Output
  cout << "The temperature is " << tempf << " degrees Farenhiet.\n";
    
    usleep(5000000);
  
}
