#include <iostream>

int main() {
	
	// int short for integer (no decimal)
	int A; // declaration
	A = 5; // initialization
	std::cout << "Value of \'A\' is " << A << '\n';
	
	int B = 6; // declaration and initialization
	std::cout << "Value of \'B\' is " << B << '\n';
	
	/*
		other data types:
		double = store decimal
		char = store text or string
		boolean = true or false only
		string = stores multiple characters
	*/
	
	// double
	double Pi = 3.14;
	std::cout << "Value of \'Pi\' is " << Pi << '\n';
	
	// char
	char grade = 'A';
	std::cout << "Value of \'grade\' is " << grade << '\n';
	
	// boolean
	bool isStudent = true;
	std::cout << "Is it a student? --> " << isStudent << "\n\t1 - True\n\t0 - False\n";
	
	// string
	std::string name = "Khian";
	std::cout << "Name: " << name << '\n';
	
	std::cin.get(); // Pause the program until enter was clicked
	return 0;
}