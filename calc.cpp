#include <iostream>
#include <cmath>
using namespace std;

void work() {
  double fNum;
  double sNum;
  cout << "Enter first number \n > ";
  cin >> fNum;
  cout << "Enter second number \n > ";
  cin >> sNum;
  
  string input;
  cout << "Options: \n 1. Add=A \n 2. Subtract=S \n 3. Multiply=M \n 4. Divide=D \n";
  cout << "If you want to quit press Q \n";
  cin >> input;
  double result;
  if(input == "A" || input == "a") {
    result = fNum + sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "S" || input == "s") {
    double result = fNum - sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "M" || input == "m") {
    double result = fNum * sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "D" || input == "d") {
    double result = fNum / sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "Q" || input == "q") {exit(0);}
  else {
    cout << "\n Invalid input please select a valid option \n" << endl;
    work();
  }
}
int main() {
cout << "Simple Calculator. Select an option from the list. \n";
work();

return 0;
}
