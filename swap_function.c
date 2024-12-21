#include <stdio.h>

void swap(int *p, int *q); // Function declaration

int main() {
    int n1, n2;

    printf("\n\nFunction: Swap two numbers using a function:\n");
    printf("--------------------------------------------\n");

    printf("Input 1st number: ");
    scanf("%d", &n1);

    printf("Input 2nd number: ");
    scanf("%d", &n2);

    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    // Pass the address of both variables to the function.
    swap(&n1, &n2);

    printf("After swapping: n1 = %d, n2 = %d\n\n", n1, n2);

    return 0;
}

// Function to swap two numbers using pointers
void swap(int *p, int *q) {
    // p = &n1, so *p stores the value of n1
    // q = &n2, so *q stores the value of n2
    int tmp;

    tmp = *p;  // Store the value of n1 in tmp
    *p = *q;   // Assign the value of n2 to n1
    *q = tmp;  // Assign the value of tmp (original n1) to n2
}
