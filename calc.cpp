#include <iostream>
#include <cmath>
using namespace std;

double calculate(double x, char oper, double y) {
  switch(oper) {
   case '+':
   	return x+y;
   case '-':
	return x-y;
   case '*':
	return x*y;
   case '/':
	return (double)x/y;
   default:
	cout << "ERROR: INVALID INPUT. DEFAULT RESULT RETURNED \n";
	return 0.0;
  }
}

void ask() {
  string input;
  cout << "Regular math=R \n Square Root=SQ \n";
  cout << "If you want to quit press Q \n";
  cin >> input;

  if(input == "R" || input == "r") {
   double x = 0.0;
   double y = 0.0;
   char oper;
   cout << "Enter in the following format: x/y, x+y, x-y, x*y \n";
   cin >> x >> oper >> y;
   double result = calculate(x, oper, y);
   cout << "The result is: " << result << endl;
}
  else if(input == "SQ" || input == "sq") {
    cout << "Input value \n > ";
    float value;
    cin >> value;
    double result = sqrt(value);
    cout << "The result is: " << result << endl;
  }
  else {
    cout << "\n Invalid input please select a valid option \n" << endl;
    ask();
  }
}
int main() {
cout << "Simple Calculator \n";
ask();

return 0;
}
