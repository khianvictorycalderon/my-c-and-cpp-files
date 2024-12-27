#include <stdio.h>
#include <string.h>

int main() {
	
	printf("Enter \"exit\" to stop the execution of the program.\n");
	char input[100];
	
	while (1) {
		// get user input
        fgets(input, sizeof(input), stdin);
        
        // Remove newline character from input if it exists
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        if (strcmp(input, "exit") == 0) {
            printf("Program terminated!\n");
            break; // Exit the loop
        }

		// if the user input is not exit
        printf("Program still running...\n");
    }
	
	getchar();
	return 0;
}