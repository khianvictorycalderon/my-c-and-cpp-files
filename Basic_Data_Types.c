#include <stdio.h>
int main() {
	int a; // This is a declaration
	a = 15; // This is initialization
	int b = 16; // This is both a declaration and initialization
	
	int age = 21; // int for integer
	float height = 5.2; // float for numbers with decimal of 32-bit precision 
	char middleInitial = 'C'; // Single character
	char name[] = "Jake"; // Array of characters
	
	// Format specifier, printf
	printf("Hello %s \n", name);
	printf("You are %d years old. \n", age);
	printf("Your middle initial name is %c. \n", middleInitial);
	printf("Your height is about %f feet \n", height); // Display up to 6 digit decimal places
	printf("Your height is about %0.2f feet \n", height); // Display up to 2 digit decimal places
	
	system("pause");
	return 0;
}