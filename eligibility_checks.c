#include <stdio.h> // Include the standard input/output header file.

void main()
{
    int p, c, m; // Declare variables to store marks in Physics, Chemistry, and Maths.
    int t, mp;   // Variables to store total marks.

    printf("Eligibility Criteria:\n"); // Display eligibility criteria.
    printf("Marks in Maths >= 65\n");
    printf("Marks in Physics >= 55\n");
    printf("Marks in Chemistry >= 50\n");
    printf("Total in all three subjects >= 190 OR Total in Maths and Physics >= 140\n\n");

    // Prompt user for marks input
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &p);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &c);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &m);

    // Calculate totals
    t = m + p + c; // Total of all three subjects
    mp = m + p;    // Total of Maths and Physics

    printf("\nTotal marks of Maths, Physics, and Chemistry: %d\n", t);
    printf("Total marks of Maths and Physics: %d\n", mp);

    // Check eligibility based on criteria
    if (m >= 65)
    {
        if (p >= 55)
        {
            if (c >= 50)
            {
                if (t >= 190 || mp >= 140)
                {
                    printf("The candidate is eligible for admission.\n");
                }
                else
                {
                    printf("The candidate is not eligible.\n");
                }
            }
            else
            {
                printf("The candidate is not eligible.\n");
            }
        }
        else
        {
            printf("The candidate is not eligible.\n");
        }
    }
    else
    {
        printf("The candidate is not eligible.\n");
    }
}
