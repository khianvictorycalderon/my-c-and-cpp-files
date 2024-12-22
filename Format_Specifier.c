#include <stdio.h>

int main() {
	/*
	 	format specifier:
	 	% = defines and format a type of data to be displayed
	 	
	 	%c = character
	 	%s = string
	 	%f = float
	 	%lf = double (long float)
	 	%d = integer
	 	
	 	%.<number> such as %0.2f = decimal precision (2 decimal in this case)
		%<number> such as %1d = minimum field width, negative for left alignment
	*/
	 
	float item1 = 6.256;
	printf("The value of item1 %f without value precision\n", item1);
	printf("The value of item1 %.2f with 2 decimal value precision\n", item1);
	printf("The value of item1 %2.0f with 2 spaces field width\n", item1);
	printf("The value of item1 %-2.0f with 2 spaces field width but is align in the right\n", item1);
	
	return 0;
}