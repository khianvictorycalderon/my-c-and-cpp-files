#include <stdio.h>

int main() {
	
	int num;
	printf("How many values of i do you want to print?\n");
	scanf("%d", &num);
	getchar();
	printf("\n");
	
	/*
	    for (initializer; condition; update) {
	        // The initializer sets the starting value of the loop variable.
	        // The condition is checked before each iteration; if true, the loop executes.
	        // The update modifies the loop variable after each iteration.
	    }
	*/
	
	for (int i = 1; i < num + 1; i++) {
		printf("The value of i is %d\n", i);
	}
	
	getchar();
	return 0;
}