#include <iostream>
#include "Person.hpp"
using namespace std;

int main() {
  Person person1;
  person1.name = "Daniel";
  cout << "Name: " << person1.name << " \n";
  person1.speak();
  person1.walkInput();
  return 0;
}