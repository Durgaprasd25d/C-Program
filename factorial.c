#include <stdio.h>
int main()
{
    int fact = 1;
    int i ;
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d", fact);
    return 0;
}
