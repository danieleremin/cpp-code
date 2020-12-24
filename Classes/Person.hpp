#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;
public:
  Person();
  Person(string name, int age): name(name), age(age) {};
  ~Person();
    Person(const Person& other) {
        cout << "Person created by copying. \n";
        name = other.name;
        age = other.age;
    }
  void setName(string newName);
  void speak();
  void walk();
  int walkInput();
  string data();
};
#endif
