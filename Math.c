#include <stdio.h>
#include <math.h>

int main() {
	
	int A = sqrt(25);
	int B = pow(2, 4);
	int C = round(2.5);
	int D = ceil(1.1);
	int E = floor(3.9);
	double F = fabs(-24);
	
	printf("Square root of 25 is %d\n", A);
	printf("2 to the power of 4 is %d\n", B);
	printf("2.5 round off is %d\n", C);
	printf("1.1 ceiled is %d\n", D);
	printf("3.9 floored is %d\n", E);
	printf("Absolute value of 24 is %d\n", F);
}