#include <stdio.h>
int main() {
	
	// Static Value
	int a = 5;
	int b = 10;
	printf("a = 5\nb = 10\n\n");
	
	// First method
	a += 2;
	printf("Value of a add 2 is %d\n",a);
	
	// Second Method
	a = a + 2;
	printf("Value of a add another 2 is %d\n",a);
	
	// With another operators:
	// Subtract
	b -= 3;
	printf("b subtract 3 is %d\n", b);
	
	// Multiply
	a *= 2;
	printf("a multiply by 2 is %d\n", a);
	
	// Divide
	a /= a;
	printf("a divided by a is %d\n",a);
	
	system("pause");
	return 0;
}