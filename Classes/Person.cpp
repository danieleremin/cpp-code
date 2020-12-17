#include <iostream>
#include "Person.hpp"
using namespace std;

void Person::speak() {
  cout << "Hello! \n";
}
void Person::walk() {
  cout << "Where do you want the person to walk? \n > ";
  string location;
  cin >> location;
  cout << "\n Walking to " << location << ". \n";
}
int Person::walkInput() {
  std::cout << "Do you want to walk? \n Press 2 if yes or 1 if no. \n";
  int input;
  std::cin >> input;
  switch(input) {
    case 2: 
      walk();
      break;
    case 1:
      return 0;
      break;
    default:
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Try again \n";
      walkInput();
    }
}
Person::Person() {
  cout << "\n Person created. \n What do you want this person's name to be? \n> ";
  string inputA;
  cin >> inputA;
  name = inputA;
  int inputB;
  cout << "What age? \n";
  cin >> inputB;
  age = inputB;
}
string Person::data() {
  string alldata = "Age: " + to_string(age) + "\nName: " + name;
  return alldata + "\n";
}