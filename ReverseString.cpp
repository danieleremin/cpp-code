#include <iostream>
using namespace std;

int main() {
    char text[] = "Hello";
    int nChars = sizeof(text)-1;
    char* pStart = text;
    char* pEnd = text + nChars - 1;
    
    cout << "Regular output of character array: ";
    for (int i=0; i<sizeof(text)/sizeof(char); i++) {
        cout << text[i] << flush;
    }
    cout << endl;
    
    while(pStart < pEnd) {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;
        
        pStart++;
        pEnd--;
    }
    cout << "Reverse output: " << text << endl;
    
    return 0;
}
