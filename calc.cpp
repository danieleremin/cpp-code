#include <iostream>
#include <cmath>
using namespace std;
double squareRT(float value) {
  sqrt(value);
  return value;
}
void work() {
  string input;
  cout << "Options: \n 1. Add=A \n 2. Subtract=S \n 3. Multiply=M \n 4. Divide=D \n Square Root=SQ \n";
  cout << "If you want to quit press Q \n";
  cin >> input;
  double result;
  double fNum;
  double sNum;
  if(input == "A" || input == "a") {
    cout << "Enter first number \n > ";
    cin >> fNum;
    cout << "Enter second number \n > ";
    cin >> sNum;
    result = fNum + sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "S" || input == "s") {
    cout << "Enter first number \n > ";
    cin >> fNum;
    cout << "Enter second number \n > ";
    cin >> sNum;
    double result = fNum - sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "M" || input == "m") {
    cout << "Enter first number \n > ";
    cin >> fNum;
    cout << "Enter second number \n > ";
    cin >> sNum;
    double result = fNum * sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "D" || input == "d") {
    cout << "Enter first number \n > ";
    cin >> fNum;
    cout << "Enter second number \n > ";
    cin >> sNum;
    double result = fNum / sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "SQ" || input == "sq") {
    cout << "Input value \n > ";
    float value;
    cin >> value;
    double result = sqrt(value);
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