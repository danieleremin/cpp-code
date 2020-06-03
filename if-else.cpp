#include <iostream>
#include <unistd.h>

// This will check if the text entered is the same as the text in the string pass

using namespace std;

int main () {
   
    string pass = "c++";
    
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

