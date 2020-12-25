#include <iostream>
using namespace std;

void show(const int nElements, string texts[]) {
  for (int i = 0; i<3; i++) {
    cout << texts[i] << ", ";
  }
  cout << endl;
}

int main() {
  string fruits[] = {"apple", "banana", "orange"};
  
  // if large array then sizeof(fruits)/sizeof(string) could be used instead of number
  show(3, fruits);
  return 0;
}