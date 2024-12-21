#include <stdio.h>

// Function prototype declaration
int* findLarger(int*, int*);

int main() {
    // Initializing variables
    int numa = 0;
    int numb = 0;
    int *result;

    // Displaying the purpose of the program
    printf("\n\nPointer: Show a function returning pointer:\n");
    printf("--------------------------------------------\n");

    // Inputting the first number
    printf("Input the first number: ");
    scanf("%d", &numa);

    // Inputting the second number
    printf("Input the second number: ");
    scanf("%d", &numb);

    // Calling the function to find the larger number
    result = findLarger(&numa, &numb);

    // Displaying the larger number found by the function
    printf("The number %d is larger.\n\n", *result);

    return 0;
}

// Function definition to find the larger number
int* findLarger(int *n1, int *n2) {
    // Checking which number is larger
    if (*n1 > *n2)
        return n1; // Return the address of n1 if it's larger
    else
        return n2; // Return the address of n2 if it's larger
}
