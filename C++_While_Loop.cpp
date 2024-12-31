#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::string;
	
	cout << "Enter 'exit' to stop the while loop.\n\n";
	string ui; // user input
	while (true) {
		cout << "-> ";
		cin >> ui;
		if (ui == "exit") {
			break;
		}
	}
	cout << "Program terminated, thank you for using the program! \n";
	
	cin.ignore(); // Clears white spaces
	cin.get(); // Pause the program until enter was clicked
	return 0;
}