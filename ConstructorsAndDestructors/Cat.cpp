#include <iostream>
#include "Cat.hpp"
using namespace std;

Cat::Cat() {
  cout << "New cat created. \n";
  happy = true;
}
void Cat::speak() {
  if(happy) {
    cout << "Meouw!!! \n";
  }
  else {
    cout << "SSss! \n";
  }
}
void Cat::makeSad() {
  happy = false;
}