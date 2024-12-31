#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	double Pi = 3.14;
	cout << "Value of Pi but converted to integer is " << (int)Pi << '\n';
	
	cin.get(); // Pause the program until enter was clicked
	return 0;
}