#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	int num;
	cout << "How many numbers do you want to print?\n";
	cin >> num;
	cout << '\n';
	
	for (int i = 0; i <= num; i++) {
		cout << i << '\n';
	}
	
	cin.ignore(); // Clears white spaces
	cin.get(); // Pause the program until enter was clicked
	return 0;
}