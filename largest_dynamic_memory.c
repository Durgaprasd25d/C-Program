#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float *element;

    printf("\n\nFind the largest element using dynamic memory allocation\n");
    printf("--------------------------------------------------------\n");

    // Input the total number of elements
    printf("Input the total number of elements (1 to 100): ");
    scanf("%d", &n);

    // Allocate memory dynamically
    element = (float *)calloc(n, sizeof(float));
    if (element == NULL)
    {
        printf("No memory allocated.\n");
        exit(0); // Exit program if memory allocation fails
    }

    // Input the 'n' numbers and store them in dynamically allocated memory
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", (element + i));
    }

    // Find the largest element among the 'n' elements
    float largest = *element; // Initialize largest with the first element
    for (i = 1; i < n; i++)
    {
        if (*(element + i) > largest)
        {
            largest = *(element + i); // Update largest if a bigger value is found
        }
    }

    printf("\nThe largest element is: %.2f\n\n", largest);


    return 0;
}
