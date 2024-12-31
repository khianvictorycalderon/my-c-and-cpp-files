#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	
	// We will be basing on these 2 variable:
	int X = 28;
	int Y = 13;
	cout << "X = " << X << '\n';
	cout << "Y = " << Y << '\n';
	cout << '\n';
	
	/*
		These are 5 basic arithmetic operators:
		+  for addition
		-  for subtraction
		*  for multiplication
		/  for division
		%  for modulo (the remainder after division)
	*/
	
	cout << "These 5 basic arithmetic operators don't change the original value of X and Y.\n";
	
	// For addition
	int A = X + Y;
	cout << "X + Y is " << A << '\n';
	
	// For subtraction
	int B = X - Y;
	cout << "X - Y is " << B << '\n';
	
	// For multiplication
	int C = X * Y;
	cout << "X * Y is " << C << '\n';
	
	// For division
	int D = X / Y;
	cout << "X / Y is " << D << '\n';
	
	/*
		These are assignment operators:
		=   for assigning a value to a variable
		+=  for adding a value to the current value of a variable
		-=  for subtracting a value from the current value of a variable
		*=  for multiplying a variable by a value
		/=  for dividing a variable by a value
		%=  for assigning the remainder of division to a variable (modulus)
	*/
	
	cout << '\n';
	cout << "These assignment operators directly change the original value of X and Y.\n";

	// direct reassignment
	X = 30;
	cout << "Direct reassginment: We give X a completely new value which is " << X << '\n';

	// add
	X += 2;
	cout << "We add 2 to X, now the new value of X is " << X << '\n';
	
	// subtract
	X -= 3;
	cout << "We remove 3 to X, now the new value of X is " << X << '\n';
	
	// multiply
	Y *= 3;
	cout << "We multiply Y by 3, now the new value of Y is " << Y << '\n';
	
	// divide
	Y /= 2;
	cout << "We divide Y by 2, now the new value of Y is " << Y << '\n';
	
	// modulo
	Y %= 10;
	cout << "Lastly, we retain the remainder of Y when divided by 10, now the new value of Y is " << Y << '\n';

	cin.get(); // Pause the program until Enter is pressed
	return 0;
}
