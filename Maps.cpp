#include <iostream>
#include <map>
using namespace std;

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
	
	return 0;
}
