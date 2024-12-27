#include <stdio.h>

int main() {
	
	int Y, X = 1;
	printf("How many do you want to print using while loop?\n");
	scanf("%d", &Y);
	getchar();
	while (X <= Y) {
		printf("The value is %d\n", X);
		X++;
	}
	printf("\n");
	
	int A;
	printf("How many do you want to reduce using do while loop?\n");
	scanf("%d", &A);
	getchar();
	do {
		printf("The value is %d\n", A);
		A--;
	} while (A > 0);
	
	getchar();
	return 0;
}