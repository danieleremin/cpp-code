#include <iostream>
#include "Person.hpp"
using namespace std;

int main() {
  {
    Person person1;
    person1.speak();
    person1.walkInput();
    cout << "Info: \n" << person1.data();
  }
  {
    Person person2;
    person2.speak();
    cout << "Info: \n" << person2.data();
  }
  cout << "Program exiting… \n";
  return 0;
}
