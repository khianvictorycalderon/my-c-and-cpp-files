#include <iostream>

int main() {
	
	std::cout << "Hello \t World" << std::endl;
	std::cout << "		\r Hello World" << std::endl;
	std::cout << "Hello" << '\n' << "World";
	
	std::cin.get(); // Pause the program until enter was clicked
	return 0;
}