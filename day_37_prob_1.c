//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS]; // 1D array to store the sum of each row
    int rows, cols;
    int i, j;

    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    // 2. Input matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate row sums and store them in the rowSums array
    for (i = 0; i < rows; i++) {
        int current_row_sum = 0; // Reset sum for the current row
        for (j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum; // Store the total sum in the 1D array
    }

    // 4. Display the resulting array
    printf("\nThe sum of each row stored in the array:\n");
    for (i = 0; i < rows; i++) {
        printf("rowSums[%d] (Row %d Sum) = %d\n", i, i + 1, rowSums[i]);
    }

    return 0;
}
