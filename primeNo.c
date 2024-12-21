#include <stdio.h>
void main()
{
    int num, div = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number\n", num);
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                div++;
            }
        }
    }

    if (div == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}
