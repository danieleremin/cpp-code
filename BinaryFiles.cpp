#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person {
	char name[30];
	int age;
	double height;
};

#pragma pack(pop)

int main() {
	
	// Write binary file
	
	Person someone = {"James", 43, 50.1};
	
	string fileName = "person1.bin";
	fstream outputFile;
	
	outputFile.open(fileName, ios::binary|ios::out);
	
	if(outputFile.is_open()) {
		outputFile.write(reinterpret_cast<char*>(&someone), sizeof(Person));
		outputFile.close();
	}
	else {
		cout << "Could not create file " << fileName;
		return 1;
	}
	
	// Read binary file
	
	Person someoneElse = {};
	
	ifstream inputFile;
	
	inputFile.open(fileName, ios::binary);
	
	if(outputFile.is_open()) {
		inputFile.read(reinterpret_cast<char*>(&someoneElse), sizeof(Person));
		inputFile.close();
	}
	else {
		cout << "Could not read file " + fileName;
		return 1;
	}
	
	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
	
	return 0;
}
