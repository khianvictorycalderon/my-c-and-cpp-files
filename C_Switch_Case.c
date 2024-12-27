#include <stdio.h>

int main() {
    int a = 5;
    
    // Switch cannot have >= or <= as it requires absolute value
    switch(a) {
        case 5:
            printf("a value is 5.\n");
            break;
        case 6:
            printf("a value is 6.\n");
            break;
        case 7:
            printf("a value is 7.\n");
            break;
        // If all conditions are false
        // Similar to else in conditional if statement
        default:
            printf("a value is neither 5, 6, nor 7.\n");
            if(a < 0) { // This can work without else
            	printf("a is also a negative.");
			}
            break;
    }
    
    getchar();
    return 0;
}