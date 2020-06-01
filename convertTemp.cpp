// This file converts Farenhiet to Celsius

#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Farenhiet\n";

 std::cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
