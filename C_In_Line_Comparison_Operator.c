#include <stdio.h>

int main() {
    // Relational Operators Example

    // Description:
    // Relational operators compare two values and return a boolean result:
    // 1 (True) if the condition is satisfied, or 0 (False) otherwise.

    printf("Relational operators:\n1 = True\n0 = False\n\n");

    // This is an expression:
    // The comparison operator after the equal sign evaluates to true or false
    // Either 0 (false) or 1 (true).
    int a = 5 < 10; // Is 5 less than 10? If yes, return 1; if no, return 0.
    printf("Is 5 less than 10? --> %d\n", a);

    int b = 15 * 15 >= 300; // Is 15 times 15 greater than or equal to 300?
    printf("Is 15 times 15 greater than or equal to 300? --> %d\n", b);

	getchar();
    return 0;
}