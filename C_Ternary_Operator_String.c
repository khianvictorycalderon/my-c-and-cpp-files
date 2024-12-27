#include <stdio.h>

int main() {
	
	int x;
	int y;
	
	// Input for x
	printf("Enter integer value for x: ");
	scanf("%d", &x);
	
	// Input for y
	printf("Enter integer value for y: ");
	scanf("%d", &y);
	
	// Ternary Operator with Strings
	const char *same = (x == y) ? "the same" : "not the same";
	printf("The x and y variable are %s\n", same);
	
	getchar();
	return 0;
}