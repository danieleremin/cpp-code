#include <iostream>
#include <unistd.h>
using namespace std;

int main () {
   
    string pass = "c++";
    
    cout << "Enter secret text > \n" << flush;
    
    string input;
    
    cin >> input;
    
    // For debuging: cout << "You entered '" << input << "'" << endl;
   
   // This will check if the text entered is the same as the text in the string pass 
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
