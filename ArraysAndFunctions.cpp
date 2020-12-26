#include <iostream>
using namespace std;

void show(string (&texts)[3] /* Correct number must be used */) {
  cout << sizeof(texts) << endl;
  for (int i = 0; i<3; i++) {
    cout << texts[i] << ", ";
  }
  cout << endl;
}

int* getMem() {
  int* pMem = new int[101];
  return pMem;
}

int main() {
  string fruits[] = {"apple", "banana", "orange"};

  show(fruits);
  
  int* pMem = getMem();
  
  for(int i = 0; i<101; i++) {pMem[i] = i;}
  
  cout << "numbers: ";
  for(int i=0; i<101; i++) {
    cout << pMem[i] << ", ";
  }
  cout << endl;
  
  delete [] pMem;
  
  return 0;
}