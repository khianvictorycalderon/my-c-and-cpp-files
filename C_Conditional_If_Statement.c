#include <stdio.h>
int main() {
	
	int a = 5;
	// If Statement = Test for condition
	if(a > 5) {
		// If condition is true, execute this block of code
		printf("A is more than 5.");
	} else {
		// If condition is false, execute this block of code
		printf("A is not more than 5.");
	}
	printf("\n"); // Add new line
	
	int b = 16;
	// Else If Statement = Test for multiple conditions
	if(b == 16) { // Condition 1
		printf("B is 16");
	} else if (b == 17) { // Condition 2
		printf("B is 17");
	} else if (b <= 15) { // Condition 3
		printf("B is less than or equal 15");
	} else if (b >= 18) { // Condition 4
		printf("B is greater than or equal 18");
	} else { // If all conditions are false
		printf("Unknown value of B");
	}
	
	printf("\n"); // Add new line
	getchar();
	return 0;
}