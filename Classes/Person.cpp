#include <iostream>
#include "Person.h"
using namespace std;

void speak() {
  cout << "Hello! \n";
}
void walk() {
  cout << "Where do you want the person to walk? \n > ";
  string location;
  cin >> location;
  cout << "\n Walking to " << location << ". \n";
}