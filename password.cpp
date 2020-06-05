
#include <iostream>
#include <unistd.h>

using namespace std;

int main () {
   
    string pass = "password";
    
    cout << "Enter secret text > \n" << flush;
    
    string input;
    
    cin >> input;
    
    // cout << "You entered '" << input << "'" << endl;
    
    if (input == pass) {
        
        cout << "Correct!\n";
        
        usleep(1000000);
        
    }
    else {
        cout << "Incorrect!\n";
        
        usleep(1000000);
    }
    
    
    return 0;
}
