#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	int num;
	cout << "Enter a number between 1-9: ";
	cin >> num;
	
	switch(num) {
    case 1:
        cout << "You chose number one\n";
        break;
    case 2:
        cout << "You chose number two\n";
        break;
    case 3:
        cout << "You chose number three\n";
        break;
    case 4:
        cout << "You chose number four\n";
        break;
    case 5:
        cout << "You chose number five\n";
        break;
    case 6:
        cout << "You chose number six\n";
        break;
    case 7:
        cout << "You chose number seven\n";
        break;
    case 8:
        cout << "You chose number eight\n";
        break;
    case 9:
        cout << "You chose number nine\n";
        break;
    default:
        cout << "Invalid choice\n";
        break;
	}
	
	cin.ignore(); // Clears leftover white spaces
	cin.get(); // Pause the program until enter was clicked
	return 0;
}