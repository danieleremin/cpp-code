#include <iostream>
using namespace std;

int main() {

string animals[][3] = {
		 {"fox", "cat", "dog"},
		 {"mouse", "squirrel", "rabbit"},
	};
for(unsigned int i=0; i< sizeof(animals)/sizeof(animals[0]); i++) {
	for(int a; a< sizeof(animals[0])/sizeof(string); a++) {
		cout << animals[i][a] << " " << flush;
	}
	cout << endl;
}

return 0;
}
