#include <iostream>
#include "Person.hpp"
using namespace std;

Person* createPerson() {
  Person *pPerson = new Person();
  return pPerson;
}

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
  Person* person4 = createPerson();
  (*person4).speak();
  person4->walkInput();
  delete person4;
    
  cout << "Program exiting… \n";
  return 0;
}
