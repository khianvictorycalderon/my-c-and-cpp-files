#include <stdio.h>

int main() {
	
	int a = 5;
	char b[1] = "H";
	
	printf("The size of a is %d\n", sizeof(a));
	printf("The size of b is %d\n", sizeof(b));
	printf("\n");
	
	printf("The address of a is\n%p\n", &a);
	printf("The address of b is\n%p\n", &b);
	
	getchar();
	return 0;
}