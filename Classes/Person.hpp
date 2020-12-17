#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
private:
  std::string name;
  int age;
public:
  Person();
  void setName(std::string newName);
  void speak();
  void walk();
  int walkInput();
  std::string data();
};
#endif
