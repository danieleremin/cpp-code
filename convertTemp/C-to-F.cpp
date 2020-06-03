// This file converts Celsius to Farenhiet

#include <iostream>

int main() {
  
  double tempc;
  double tempf;
  
  // Ask the user
  std::cout << "Enter the temperature in Celsius\n";

 std::cin >> tempc;
  
  // Calculate
  tempf = (tempc / 5) * 9 + 32;
  
    // Output
  std::cout << "The temp is " << tempf << " degrees Farenhiet.\n";
    
    usleep(5000000)
  
}
