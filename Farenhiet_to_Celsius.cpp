#include <iostream>
#include <unistd.h>

// This converts Fahrenheit to Celsius then outputs the result.
int main() {
  
  double tempf;
  double tempc;
  
  std::cout << "Enter the temperature in Farenhiet " << endl << "> ";

 std::cin >> tempf;
  
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temperature is " << tempc << " degrees Celsius.\n";
    
    usleep(5000000);
  
}
