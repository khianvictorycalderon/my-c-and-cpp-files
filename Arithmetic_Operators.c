#include <stdio.h>

int main() {
	// Arithmetic Operators
	// + - * / % ++ --
	
	// Static given variables
	int a = 1;
	int b = 2;
	printf("a = 1\nb = 2\n\n");
	
	// Addition
	printf("a + b = %d \n", a + b);
	int c = a + b;	// You can also store the result in a variable
	printf("a + b = %d \n", c);
	
	// Subtraction
	int d = b - a;
	printf("b - a = %d \n", d);
	
	// Multiplication
	int e = a * b;
	printf("a times b is %d \n", e);
	
	// Division
	int f = 10 / 5;
	printf("10 divided by 5 is %d \n", f);
	
	// Modulo
	// Stores the result the remainder
	int g = 100 % 30;
	// How many 30 in 100?
	// There is a remainder of 10
	// Then the value is 10
	printf("100 % 30 is %d \n", g);
	
	// Increment
	int h = 2;
	h++;
	printf("2 increment is %d \n", h);
	
	// Decrement
	int i = 5;
	i--;
	printf("5 decremenet is %d \n", i);
	
	// Operation with different variable type
	int x = 10;
	float y = 20;
	float z = y / (float) x;
	printf("10 divided by 20 is %d, but with data type conversion.\n",z);
	
	system("pause");
	return 0;
}