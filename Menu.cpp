#include <iostream>
using namespace std;

int main() {

cout << "Welcome to the c++ restaurant, Please enter which dish you would like. \n" << endl;
cout << "Restaurant Menu: \n 1. Potato Salad \n 2. Roast beef sandwich \n 3. Chicken Soup \n 4. Vegetable stew" << endl;

int order;
cin >> order;

switch(order) {
case 1:
	cout << "You have ordered potato salad. Thank you for your order! \n";
	break;
case 2:
	cout << "You have ordered the roast beef sandwich. Thank you for your order! \n";
	break;
case 3:
	cout << "You have ordered chicken soup. Thank you for your order! \n";
	break;
case 4:
	cout << "You have ordered vegetable stew. Thank you for your order! \n";
	break;
default:
	cout << "Invalid value. Please run this program again. \n";
}

return 0;
}
