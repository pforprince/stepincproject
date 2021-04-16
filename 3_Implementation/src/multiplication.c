#include "my_header.h"

void multiplication()
{
    int firstNumber;
    int secondNumber;
    int result = 0;
    printf("\nPlease enter your first number: ");
    scanf("%d", &firstNumber);
    printf("Please enter your second number: ");
    scanf("%d", &secondNumber);
    result = firstNumber * secondNumber;
    printf("\nThe result of multiplication is = %d\n", result);
}
