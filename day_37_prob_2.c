//Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c;

    // Prompt user for matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int transpose[c][r]; // Dimensions are swapped for the transpose matrix

    // Input elements of the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Compute the transpose of the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }

    // Display the transposed matrix
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
