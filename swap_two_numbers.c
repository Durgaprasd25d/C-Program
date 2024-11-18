#include<stdio.h>

void swap(int *, int *);

int main() {
    int n1, n2;

    printf("\n\n Function: Swap two numbers using function:\n");
    printf("------------------------------------------------\n");

    // Input validation for 1st number
    printf("Input 1st number: ");
    while (scanf("%d", &n1) != 1) {
        printf("Invalid input! Please enter an integer for the 1st number: ");
        while(getchar() != '\n'); // Clear input buffer
    }

    // Input validation for 2nd number
    printf("Input 2nd number: ");
    while (scanf("%d", &n2) != 1) {
        printf("Invalid input! Please enter an integer for the 2nd number: ");
        while(getchar() != '\n'); // Clear input buffer
    }

    // Display numbers before swapping
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    // Pass the address of both variables to the swap function
    swap(&n1, &n2);

    // Display numbers after swapping
    printf("After swapping: n1 = %d, n2 = %d\n\n", n1, n2);

    return 0;
}

// Function to swap two numbers
void swap(int *p, int *q) {
    int tmp;
    tmp = *p;  // tmp stores the value of n1
    *p = *q;   // *p (n1) is assigned the value of *q (n2)
    *q = tmp;  // *q (n2) is assigned the value of tmp (original n1)
}
