#include <iostream>
using namespace std;

void show(string (&texts)[3] /* Correct number must be used */) {
  cout << sizeof(texts) << endl;
  for (int i = 0; i<3; i++) {
    cout << texts[i] << ", ";
  }
  cout << endl;
}

int main() {
  string fruits[] = {"apple", "banana", "orange"};

  show(fruits);
  return 0;
}