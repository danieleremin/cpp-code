#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
public:
  void speak();
  void walk();
  int walkInput();
  std::string name;
};
#endif
