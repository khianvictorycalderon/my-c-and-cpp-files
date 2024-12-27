#include <stdio.h>

int main() {
	// Declaring a 3x4 matrix
	// Matrix are also called 2D Array
	// The 3 and 4 are the max value only, but it can be fewer
    int matrix[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    // Iterating over all the rows and columns and printing all values
    int rows = 3;
    int cols = 4;

    for (int i = 0; i < rows; i++) {       // Looping over rows
        for (int j = 0; j < cols; j++) {   // Looping over columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    getchar();
    return 0;
}