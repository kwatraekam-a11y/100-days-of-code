//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal elements: ");
    for (i = 0; i < r && i < c; i++) {
        printf("%d ", a[i][i]);
    }

    return 0;
}

