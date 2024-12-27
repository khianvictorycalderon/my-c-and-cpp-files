#include <stdio.h>
int main() {
	int a = 5;
	
	// Logical And operator
	if(a <= 5 && a >= 1) {
		printf("Value of a is between 1-5.");
	} else {
		printf("Value of a is not between 1-5.");
	}
	printf("\n"); // Add new line
	
	// Logical Or operator
	if (a == 5 || a == 10) {
		printf("a is either 5 or 10.");
	} else if (a == 11 || a == 15) {
		printf("a is either 11 or 15");
	} else {
		printf("Unknown value of a");
	}
	printf("\n"); // Add new line
	
	// Logical Not operator
	if(!(a == 5)) {
		printf("a value is not 5.");
	} else {
		printf("a value is 5.");
	}
	printf("\n"); // Add new line
	
	// Not equal
	if(a != 3) {
		printf("a value is not 3.");
	} else {
		printf("a value is 3");
	}
	printf("\n"); // Add new line
	
	getchar();
	return 0;
}