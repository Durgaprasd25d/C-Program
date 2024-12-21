#include <stdio.h>
int main() {
    int i, j, n;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (i = 1; i <= n; i++) {
        // Loop to print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
