#include <iostream>
using namespace std;

int main() {

// While
int Wcount = 0;
  while(Wcount <= 4) {
  cout << "While Loop " << Wcount << ".\n";
  ++Wcount;
}
cout << "Done with while loop!\n";


// For Loop
for(int i=0; i<6; i++) {
cout << "Test\n";
cout << "For loop: " << i << endl;
}

// NOTICE: The do-while loop is in the file password2.cpp

return 0;
}
