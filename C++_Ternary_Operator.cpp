#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::string;
	
	int num;
	cout << "Enter a number: ";
	cin >> num;
	string result = (num % 2 == 0) ? "Even" : "Odd";
	cout << "The number you entered is " << result << '\n';
	
	cin.ignore(); // Clears white spaces
	cin.get(); // Pause the program until enter was clicked
	return 0;
}