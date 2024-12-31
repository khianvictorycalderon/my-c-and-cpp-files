#include <iostream>

int main() {
	// This is more better than the general shortcut
	// But comes at a cost of writing too many codes
	using std::cout;
	using std::cin;
	
	int X;
	cout << "This is Shortcut Cout but with specific shortcut.";
	cin >> X;
	
	cin.get(); // Pause the program until enter was clicked
	return 0;
}