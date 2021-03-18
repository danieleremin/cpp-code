// Bitwise '&'

#include <iostream>
using namespace std;

int main() {
	int color = 0x123456;
	
	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = (color & 0x0000FF);
	
	cout << hex << (int)red << endl;
	cout << hex << (int)green << endl;
	cout << hex << (int)blue << endl;
	
	/*  color: 100010111101111011111011
		mask:  111111110000000000000000
		result:100010110000000000000000 */
		
		// Might work:
		unsigned char redAgain = color >> 16;
		cout << hex << (int)redAgain << endl;
		
		// Bitwise or: |
	
	return 0;
}