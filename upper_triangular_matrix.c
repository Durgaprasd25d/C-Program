#include <stdio.h>

int main() {
    int arr1[10][10], i, j, n;

    // Display the purpose of the program
    printf("\n\nDisplay the upper triangular of a given matrix:\n");
    printf("-------------------------------------------------\n");

    // Input the size of the square matrix
    printf("Input the size of the square matrix: ");
    scanf("%d", &n);

    // Input elements into the matrix
    printf("Input elements in the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Display the original matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
    }

    // Display upper triangular matrix
    printf("\nThe Upper Triangular Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j) {
                printf("%4d", 0); // Set lower triangular elements to zero
            } else {
                printf("%4d", arr1[i][j]); // Keep upper triangular elements
            }
        }
        printf("\n");
    }

    return 0;
}
