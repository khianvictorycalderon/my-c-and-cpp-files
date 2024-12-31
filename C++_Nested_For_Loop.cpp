 #include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	int maxLine, maxChar;
	cout << "How many characters do you want to print per line? ";
	cin >> maxChar;
	cin.ignore(); // Clears any newline residue
	cout << "How many lines do you want to print? ";
	cin >> maxLine;
	
	for (int line = 0; line < maxChar; line++) {
		for (int character = 0; character < maxChar; character++) {
			cout << "-";
		}
		cout << ">\n";
	}
	
	cin.ignore(); // Clears white spaces
	cin.get(); // Pause the program until enter was clicked
	return 0;
}