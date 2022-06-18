// This is copied from codeacadamy.
#include <iostream>
#include <stdlib.h>
#include <ctime>

int main() {

  // Create a number that's 0 or 1
  srand (time(NULL));
  int	coin = rand() % 2;

  if (coin == 0) {

    std::cout << "Heads\n";

  }
	else {

    std::cout << "Tails\n";

  }

}
