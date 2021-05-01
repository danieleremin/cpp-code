#include <iostream>
#include <map>
using namespace std;

class Person {
private:
	string name;
	int age; 
public:
	Person(): name(""), age(0) {}
	Person(string name, int age) : name(name), age(age) {}
	
	Person(const Person &other) {
		cout << "Copy constructor used" << endl;
		name = other.name;
		age = other.age;
	}
	
	void print() const {
		cout << name << ": " << age << endl;
	}
};

int main() {
	map<string, int> ages;
	// pair<string, int> addToMap("Peter", 84);
	
	ages["Daniel"] = 12;
	ages["Mike"] = 39;
	ages["Bob"] = 47;
	
	// ages.insert(addToMap);
	
	// ages.insert(pair<string, int>("Peter", 84));
	ages.insert(make_pair("Peter", 84));
	
	// if(ages.find("Mike") != ages.end())
		
	for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it;
		
		cout << age.first << ": " << age.second << endl;
	}
	
	for(map<string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}
	
	ages["Bob"] = 58;
	cout << ages["Bob"] << endl;
	
	// Custom Objects
	
	map<int, Person> people;
	
	people[0] = Person("Mike", 39);
	people[1] = Person("Bob", 23);
	people[2] = Person("Daniel", 12);
	
	people.insert(make_pair(33, Person("Joe", 43)));
	
	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << " - ";
		it->second.print();
	}
	
	return 0;
}
