#include <stdio.h>

int main() {
	/* 
		Syntax: 
			condition ? expression1 : expression2
			
	 	If the conditions is true, it evaluates the expression1
	 	If the conditions i false, it evaluates the expression2
	 	
	 	Like an inline if statement but with shorter code
	 	Works with comparison and logical operator
	*/
	
	int X = 5;
	int Y = 6;
	printf("1 = True\n0 = False\n\n");
	
	// Test if both number are the same
	int num = X == Y ? 1 : 0;
	printf("Is variable X and Y are same? --> %d\n", num);
	
	// Test if both numbers are positive
	int positive = (X > 0 && Y > 0) ? 1 : 0;
	printf("Are both X and Y variable positive? --> %d", positive);
	
	getchar();
	return 0;
}