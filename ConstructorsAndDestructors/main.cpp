#include <iostream>
#include "Cat.hpp"
using namespace std;

int main() {
  {
    Cat cat1;
    Cat cat2;
    cat1.name = "Jim";
    cat2.name = "Bob";
    cout << endl;
    
    cat2.makeSad();
    cat1.speak();
    cat2.speak();
    cout << endl;
  }
  
  cout << "Program ended. \n";
  return 0;
}