#include <iostream>
using namespace std;
// The problem with this approach is it has many terms and may cause conflict as the code grows

int main() {
	
	int X;
	cout << "This is Shortcut Cout";
	cin >> X;
	
	cin.get(); // Pause the program until enter was clicked
	return 0;
}