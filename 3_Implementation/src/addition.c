#include "my_header.h"
#include <stdio.h>

void addition()
{
    int times;
    int sum = 0;
    int counter = 0;
    int number;
    printf("\nPlease enter the number of elements you want to add:");
    scanf("%d", &times);
    printf("Please enter your numbers one by one: \n", times);
    while (counter < times)
    {
        scanf("%d", &number);
        sum = sum + number;
        counter++;
    }
    printf("The result of addition is = %d \n", sum);
}
