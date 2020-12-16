#ifndef PERSON_H
#define PERSON_H

#include <iostream>
void speak();
void walk();

static int walkInput() {
  std::cout << "Do you want to walk? \n Press 2 if yes or 1 if no. \n";
  int input;
  std::cin >> input;
  switch(input) {
    case 2: 
      walk();
      break;
    case 1:
      return 0;
      break;
    default:
      std::cout << "Invalid input. Try again \n";
      walkInput();
  }
}

#endif
