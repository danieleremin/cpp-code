#include <iostream>
#include <unistd.h>

// This converts Farenhiet to Celsius
int main() {
  
  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Farenhiet \n > ";

 std::cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temperature is " << tempc << " degrees Celsius.\n";
    
    usleep(5000000);
  
}
