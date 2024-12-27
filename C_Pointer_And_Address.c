#include <stdio.h>

int main() {
	
	/*
		Pointers and Adress
		Pointer = referencing a value to a variable
		Address = the memory that holds a value
		
		* means pointer
		& address of the variable
		
		Example:
		Adress    Value    Equivalent in programming (C) language
		0X1234      4      int x = 4;
		0X2345   0X1234    int *y = &x
		0X3456			   int z;
	*/
	
	// No pointer or address
	int a = 5;
	int b = a; // An independent copy
	a += 2; // We add 2 to a, but b is still 5
	printf("Without pointer or address\n");
	printf("Value of a is %d\n", a);
	printf("Value of b is %d, an independent copy from a\n", b);
	printf("Even if you changed the value of a, b would not change\n\n");
	
	// With pointer and address
	int c = 10;
	int *d = &c; // Points a reference to the address of c
	/*
		integer pointer d is set to the address of c
	*/
	printf("Value of c is %d\n",c);
	printf("Value of d is %d\n",*d);
	printf("If we change the value of c:\n");
	c += 3; // Add 3 to c
	printf("Value of c is %d\n",c);
	printf("Value of d is %d\n",*d);
	
	getchar();
	return 0;
}