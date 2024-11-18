#include <stdio.h>

int main()
{
    int count;
    int firstTerm = 0, secondTerm = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &count);

    // Check if the count is positive
    if (count <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program if the input is invalid
    }

    printf("First %d Fibonacci numbers:\n", count);

    // Generate Fibonacci numbers
    while (count > 0)
    {
        printf("%d", firstTerm); // Print the current Fibonacci number

        // Print a comma for all but the last term
        if (count > 1)
        {
            printf(", ");
        }

        int nextTerm = firstTerm + secondTerm; // Calculate the next Fibonacci number
        firstTerm = secondTerm;                // Update the first term with the value of the second term
        secondTerm = nextTerm;                 // Update the second term with the calculated next term

        count--; // Decrease the count for the next iteration
    }

    printf("\n");
    return 0;
}
