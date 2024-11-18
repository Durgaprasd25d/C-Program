#include <stdio.h>

void main()
{
    int p, c, m;
    printf("Eligibility Criteria :\n");
    printf("Marks in Maths >=65\n");
    printf("and Marks in Phy >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subjects >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");

    // Get input for marks.
    printf("Input the marks obtained in Physics : ");
    scanf("%d", &p); // Read and store marks in 'p'.

    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &c); // Read and store marks in 'c'.

    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &m); // Read and store marks in 'm'.

    // Calculate the totals
    int total_all = m + p + c; // Total marks in all three subjects.
    int total_mp = m + p;      // Total marks in Math and Physics.

    printf("Total marks of Maths, Physics and Chemistry : %d\n", total_all);
    printf("Total marks of Maths and Physics : %d\n", total_mp);

    // Check eligibility based on the criteria
    if ((m >= 65) && (p >= 55) && (c >= 50) && (total_all >= 190) || (total_mp >= 140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("The candidate is not eligible.\n");
    }
}
