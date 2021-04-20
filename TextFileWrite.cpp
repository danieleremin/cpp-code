#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
	// ofstream outFile;
	fstream outFile;
	string outputFileName = "test.txt";
	
	outFile.open(outputFileName, ios::out);
	
	if(outFile.is_open()) {
		outFile << "Hello! \n";
		outFile << 123 << endl;
		outFile.close();
		cout << "File Operations completed successfully \n";
	}
	else {
		cout << "Could not create file: " << outputFileName << endl;
		return 1;
	}
	
	return 0;
}
