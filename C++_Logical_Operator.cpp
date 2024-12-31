#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	int X, Y;
	
	cout << "Enter value for X: ";
	cin >> X;
	
	cout << "Enter value for Y: ";
	cin >> Y;
	
	if (X >= 0 && X <= 100) {
		cout << "X value is between 0 - 100.\n";
	} else {
		cout << "X value is NOT between 0 - 100.\n";
	}
	
	if (Y > 0 || Y < 0) {
		cout << "Y value is either positive or negative.\n";
	} else {
		cout << "Y value is 0.\n";
	}
	
	cin.ignore(); // Clears white space
	cin.get(); // Pause the program until enter was clicked
	return 0;
}