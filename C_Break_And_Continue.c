#include <stdio.h>

int main() {
    unsigned int nums, skip;

    // Numbers to print
    printf("How many numbers do you want to print?\n");
    scanf("%u", &nums); // Use %u for unsigned int
    getchar();

    // Number to skip
    printf("What number do you want to skip?\n(Enter 0 if you don't want to skip)\n--> ");
    scanf("%u", &skip);
    getchar();

    // Initialize a temporary variable starting from 1
    unsigned int temp = 1;

    while (1) {
        // Break condition: Stop when temp exceeds nums
        if (temp > nums) {
            break; // Exit the loop
        }

        // Skip the current number
        if (temp == skip) {
            printf("This number was skipped.\n");
            temp++; // Increment temp to avoid infinite loop
            continue; // Skip the rest of the loop body
        }

        // Print the current number
        printf("%u\n", temp);
        temp++; // Move to the next number
    }

    printf("Finished!...\n");
    getchar();
    return 0;
}