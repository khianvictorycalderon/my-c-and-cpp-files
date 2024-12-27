#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numRandomNumbers;
    
    // Ask the user how many random numbers to generate
    printf("How many random numbers would you like to generate? ");
    scanf("%d", &numRandomNumbers); // Read user input
    getchar();
    
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print the random numbers
    for (int i = 0; i < numRandomNumbers; i++) {
        int random_num = (rand() % 100) + 1; // Random number between 1 and 100
        printf("Random number %d: %d\n", i + 1, random_num);
    }

	getchar();
    return 0;
}
