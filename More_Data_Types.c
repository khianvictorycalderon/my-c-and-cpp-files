#include <stdio.h>
#include <stdbool.h>
int main() {
	
	/* 
		integer, int is same as long int
	    format specifier: %d
		integer range value: 
		-2,147,483,648 to +2,147,483,647 
	*/
	int num1 = 892412531;
	printf("num1 integer data type value is %d\n", num1);
	printf("------------------------------------------------\n");
	
	/*
		single character
		format specifier: %c (stands for character)
	*/
	char single = 'A';
	printf("Single character data type is %c\n", single);
	// for ASCII range: -128 to +127
	// if this exceeds 127, it returns back to -128
	char Char1 = 97;
	printf("Equivalent character of %d is %c\n", Char1, Char1);
	printf("------------------------------------------------\n");
	
	/*
		array of character
		format specifier: %s (stands for string)
	*/
	char name[] = "John"; // The [] or rectangular bracket specifies that this is an array of character
	printf("The name is %s, array character data type\n", name);
	printf("------------------------------------------------\n");
	
	/*
		boolean, true or false
		format specifier: %d (stands for decimal)
		equivalent:
		true = 1
		false = 0
		1 byte of memory
	*/
	bool isHuman = true;
	printf("%s is a human? \n 0 = Not Human \n 1 = Human \n%d is a bool data type\n", name, isHuman);
	printf("------------------------------------------------\n");
	
	/*
		float, has decimal value with precision of 32-bit
		format specifier: %f (stands for float)
		6 - 7 digits precision
		4 bytes of memory
	*/
	float num2 = 1.2345678910;
	printf("num2 float type value is %0.10f\n", num2);
	printf("------------------------------------------------\n");
	
	/*
		double, has a decimal value with double the precision of float
		has 64-bit precision, 15-16 digits
		format specifier: %lf (stands for long float)
		8 bytes of memory
	*/
	double num3 = 24.84694128591381;
	printf("num3 double type value is %0.15lf\n", num3);
	printf("------------------------------------------------\n");
	
	/*
		short int, has a range of:
		-32,768 to +32,767
		format specifier: %d (stands for decimal)
		2 bytes of memory
	*/
	short int num4 = 15400;
	printf("num4 short int type value is %d\n", num4);
	printf("------------------------------------------------\n");
	
	/*
		long long int, has a range of:
		-9 quintillion to +9 quintillion
		format specifier: %lld (stands for long long decimal)
		8 bytes of memory
	*/
	long long int num5 = 93485612392379716;
	printf("The value of num5 long long int data type is %lld\n", num5);
	printf("------------------------------------------------\n");
	
	// Unsigned part --------------------------------------------------------------------------------
	/*
		Unsigned eliminates the negative values of range,
		example, if a value of a data type is -10 to + 9,
		it adjusts the value to starting point 0,
		the new range of that data type is 0 to +20 or +18 something
	*/
	
	/*
		unsigned short int, has a range of:
		0 to +65,535
		format specifier: %d (stands for decimal)
		2 bytes of memory
	*/
	unsigned short int num6 = 65535;
	printf("num6 unsigned short int data type value is %d\n", num6);
	printf("------------------------------------------------\n");
	
	/*
		unsigned int, has a range of:
		0 to +4,294,295
		format specifier: %u (stands for unsigned)
		4 bytes of memory
	*/
	unsigned int num7 = 89523958123;
	// if this exceeds the max value, it will start another offset from 0
	printf("The integer data type num7 value is %u\n", num7);
	printf("------------------------------------------------\n");
	
	/*
		unsigned long long int, has a range of:
		0 to +18 quintillion
		format specifier: %llu (stands for long long unsigned)
		8 bytes of memory
	*/
	unsigned long long int num8 = 578912578013013423U; // add U to the end to display properly
	printf("num8 value of unsigned long long int num8 is %llu\n", num8);
	printf("------------------------------------------------\n");	
	
	system("pause");
	return 0;
}












