//  Created by Daniel Eremin on 6/2/20.
//  Copyright © 2020 Daniel Eremin. All rights reserved.

#include <iostream>

using namespace std;

int main () {
   
    string pass = "password";
    
    cout << "Enter secret text > \n" << flush;
    
    string input;
    
    cin >> input;
    
    // cout << "You entered '" << input << "'" << endl;
    
    if (input == pass) {
        
        cout << "Correct!\n";
        
    }
    else {
        cout << "Incorrect!\n";
    }
    
    
    return 0;
}

