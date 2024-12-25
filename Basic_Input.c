#include <stdio.h>
#include <conio.h>

int main() {
    char name[25];  // 25 bytes
    char quote[30]; // 30 bytes
    int age;

    // Input name
    printf("What's your name?\n--> ");
    scanf("%24s", name); // Read at most 24 chars (width specifier)

    // Clear the input buffer before using fgets
    while (getchar() != '\n'); // Consume any leftover newline

    // Input quote
    printf("What's your favorite quote?\n--> ");
    fgets(quote, sizeof(quote), stdin); // Reads the newline character after the string

    // Input age
    printf("How old are you?\n--> ");
    scanf("%d", &age);
    
    printf("----------------------------\n");

    // Output the result
    printf("Hello %s, You are %d years old.\n", name, age);
    printf("Your favorite quote is: %s \n- You\n", quote);
    
    // Wait for user input before ending
    getch();  // Consume newline left by previous scanf calls
    return 0;
}