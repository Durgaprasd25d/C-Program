#include <stdio.h>
int main() {
    int i, j, n;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (i = 1; i <= n; i++) {
        // Print spaces before stars
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
