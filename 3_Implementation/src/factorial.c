#include "my_header.h"

int factorial()
{
    int index;
    int factorial = 1;
    int number;

    printf("\nEnter your number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("\nPlease put postitive numbers");
        return 1;
    }

    for (index = 1; index <= number; index++)
        factorial = factorial * index;
    printf("\n");
    printf("The result of Factorial of %d is = %d\n", number, factorial);
    return 0;
}
