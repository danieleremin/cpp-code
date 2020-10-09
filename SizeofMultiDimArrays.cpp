#include <iostream>
using namespace std;

int main() {

string animals[2][3] = {
		 {"fox", "cat", "dog"},
		 {"mouse", "squirrel", "rabbit"},
	};
for(int i=0; i< sizeof(animals)/sizeof(animals[0]); i++) {
	for(int a; a< sizeof(animals[0])/sizeof(string); a++) {
		cout << animals[i][1] << " ";
		cout << animals[i][2] << " ";
		cout << animals[i][3] << " ";
		cout << animals[i][4] << " ";
		cout << animals[i][5] << " ";
		cout << animals[i][6] << " ";
		cout << animals[i][7] << " ";
		cout << animals[i][8] << " ";
		cout << animals[i][9] << " ";
		cout << animals[i][10] << " ";
		cout << endl;
	}
	cout << endl;
}

return 0;
}
