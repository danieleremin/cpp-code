#include <iostream>
#include "Cat.hpp"
using namespace std;

int main() {
  Cat jim;
  Cat bob;
  cout << endl;
  
  bob.makeSad();
  jim.speak();
  bob.speak();
  
  return 0;
}