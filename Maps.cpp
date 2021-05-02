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
		cout << name << ": " << age;
	}
	bool operator<(const Person &other) const {
		if(name == other.name) {
			return age < other.age;
		}
		else {
			return name < other.name;
		}
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
	
	// Custom Value
	
	map<int, Person> people;
	
	people[0] = Person("Mike", 39);
	people[1] = Person("Bob", 23);
	people[2] = Person("Daniel", 12);
	
	people.insert(make_pair(33, Person("Joe", 43)));
	
	for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
		cout << it->first << " - ";
		it->second.print();
	}
	
	// Custom Key
	
	map<Person, int> people2;
	
	people2[Person("Mike", 43)] = 42;
	people2[Person("Mike", 404)] = 123;
	people2[Person("Jeff", 88)] = 1;
	people2[Person("Sue", 37)] = 33;
	
	for(map<Person, int>::iterator it = people2.begin(); it != people2.end(); it++) {
		cout << it->second << " - " << flush;
		it->first.print();
		cout << endl;
	}
	
	// Multimap
	
	multimap<int, string> lookup;
	
	lookup.insert(make_pair(30, "John"));
	lookup.insert(make_pair(19, "Jake"));
	lookup.insert(make_pair(15, "Vicky"));
	lookup.insert(make_pair(8, "Don"));
	lookup.insert(make_pair(15, "Dylan"));
	
	for(multimap<int, string>::iterator it=lookup.begin(); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}
	cout << endl;
	for(multimap<int, string>::iterator it=lookup.find(15); it != lookup.end(); it++) {
		cout << it->first << ": " << it->second << endl;
	}
	cout << endl;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
	auto its2 = lookup.equal_range(30);
	for(multimap<int, string>::iterator it = its.first; it != its.second; it++) {
		cout << it->first << ": " << it->second << endl;
	}
	
	return 0;
}
