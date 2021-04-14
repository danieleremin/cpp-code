#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Simple read
	ifstream inFile1;
	string inFile1Name = "test.txt";
	
	inFile1.open(inFile1Name);
	
	if(inFile1.is_open()) {
		string line;
		
		while(inFile1) {
			getline(inFile1, line);
			cout << line << endl;
		}
		
		inFile1.close();
	}
	else {
		cout << "Could not open file: " << inFile1Name << endl;
	}
	
	// Longer text file read
	
	string fileName2 = "stats.txt";
	ifstream input;
	
	input.open(fileName2);
	if(!input.is_open()) {
		cout << "Could not open file: " << fileName2 << endl;
		return 1;
	}
	
	while(input) {
		string line;
		
		getline(input, line, ':');
		int population;
		input >> population;
		
		// input.get()
		input >> ws;
		
		if(!input) {
			break;
		}
		
		cout << line << " -- " << population << endl;
	}
	
	input.close();
	return 0;
}
