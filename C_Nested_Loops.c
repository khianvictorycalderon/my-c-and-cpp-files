#include <stdio.h>

int main() {
	
	// Nested for loops
	int lettersX, linesX;
	
	// Input for letters
	printf("How many letters do you want to print using nested for loop? ");
	scanf("%d", &lettersX);
	getchar();
	
	// Input for lines
	printf("How many lines do you want to print using nested for loop? ");
	scanf("%d", &linesX);
	getchar();
	
	// The main nested for loop
	for (int line = 1; line <= linesX; line++) {
		printf("Line %d: ", line);
		for (int letter = 1; letter <= lettersX; letter++) {
			printf("X ");
		}
		printf("\n");
	}
	
	printf("\n");
	
	// Nested while loops
	int lettersY, linesY;
	
	// Input for letters
	printf("How many letters do you want to print using nested while loop? ");
	scanf("%d", &lettersY);
	getchar();
	
	// Input for lines
	printf("How many lines do you want to print using nested while loop? ");
	scanf("%d", &linesY);
	getchar();
	
	// This also introduces the break
    // The main nested while loop
    while (1) {
        if (linesY <= 0) {
            break;  // Exit the infinite loop if the number of lines is invalid or zero
        }

        int line = 1;  // Initialize the outer loop counter
        while (line <= linesY) {
            printf("Line %d: ", line);

            int letter = 1;  // Initialize the inner loop counter
            while (letter <= lettersY) {
                printf("X ");
                letter++;
            }
            printf("\n");
            line++;
        }

        break;  // Exit the infinite while loop after printing
    }
	
	getchar();
	return 0;
}