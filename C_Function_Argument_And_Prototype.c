#include <stdio.h>

// Declaring it as a Prototype
int getRemainder(int a, int b);
/*
	"int a" and "int b" are both arguments
	they hold temporary value for a function
*/

int main() {
	
	// Get the remainder of 10 divided by 3
	int c = getRemainder(10, 3);
	printf("10 divided by 3 has a remainder of %d\n", c);
	
	// Get the remainder of 100 divided by 6
	int d = getRemainder(100, 6);
	printf("100 divided by 6 has a remainder of %d\n", d);
	
	getchar();
	return 0;
}

// Defining the prototype function
int getRemainder(int a, int b) {
	// This is the definition of the function
	// What the function does
	return a % b;
}