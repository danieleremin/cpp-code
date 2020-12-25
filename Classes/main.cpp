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
    Person person2("Bob", 42);
    person2.speak();
    cout << "Info: \n" << person2.data();

    Person person3 = person2;
    person3.setName("Jason");
    cout << "Info: \n" << person3.data();
  }
  Person* pPerson1 = new Person();
  (*pPerson1).speak();
  pPerson1->walkInput();
  delete pPerson1;
    
  cout << "Program exiting… \n";
  return 0;
}
