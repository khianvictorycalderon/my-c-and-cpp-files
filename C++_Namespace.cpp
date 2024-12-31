#include <iostream>

namespace Copy {
	int X = 1;
}

namespace Duplicate {
	int X = 2;
}

int main() {
	
	/*
		if there is this code:
		using namespace Copy;
		
		then, we can eliminate the namespace:
		
		std::cout << "Copy value of X: " << X << '\n';
		
		Output:
		1
		
		The reason why 1 is the output and not 0, is because we used the namespace
	*/
	
	// local variable
	int X = 0;
	std::cout << "Original value of X: " << X << '\n';
	
	// copy variable
	std::cout << "Copy value of X: " << Copy::X << '\n';
	
	// duplicate variable
	std::cout << "Duplicate value of X: " << Duplicate::X << '\n';
	
	std::cin.get(); // Pause the program until enter was clicked
	return 0;
}