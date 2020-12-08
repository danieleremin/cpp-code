#include <iostream>
using namespace std;

void getInput() {
  string input;
  cout << "Options: \n 1. Add=A \n 2. Subtract=S \n 3. Multiply=M \n 4. Divide=D \n";
  cout << "If you want to quit press Q \n";
  cin >> input;
  processAndSolve(input);
}
void processAndSolve(string input) {
  double fNum;
  double sNum;
  if(input == "A") {
    cout << "Enter first number";
    cin >> fNum;
    cout << "Enter second number";
    cin >> sNum;
    double result = fNum + sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "S") {
    cout << "Enter first number";
    cin >> fNum;
    cout << "Enter second number";
    cin >> sNum;
    double result = fNum - sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "M") {
    cout << "Enter first number";
    cin >> fNum;
    cout << "Enter second number";
    cin >> sNum;
    double result = fNum * sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "D") {
    cout << "Enter first number";
    cin >> fNum;
    cout << "Enter second number";
    cin >> sNum;
    double result = fNum / sNum;
    cout << "The result is: " << result << endl;
  }
  else if(input == "Q") {exit();}
  else {
    cout << "Invalid input please select a valid option \n" << endl;
    getInput();
  }
}

int main() {
cout << "Simple Calculator. Select an option from the list. \n";
getInput();

return 0;
}
