#include <stdio.h>

int main()
{
    double num1, num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Arithmetic Operations on %.2lf and %.2lf:\n", num1, num2);

    double sum = num1 + num2;
    printf("Sum: %.2lf\n", sum);

    double difference = num1 - num2;
    printf("Difference: %.2lf\n", difference);

    double product = num1 * num2;
    printf("Product: %.2lf\n", product);

    if (num2 != 0)
    {
        double quotient = num1 / num2;
        printf("Quotient: %.2lf\n", quotient);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
