#include "my_header.h"
#include <math.h>

void power()
{
    double a, number, power;
    printf("\nEnter two number to find the power \n");
    printf("number: ");
    scanf("%lf", &a);

    printf("power : ");
    scanf("%lf", &number);

    power = pow(a, number);

    printf("\nThe result of %lf to power %lf is = %lf \n", a, number, power);
}
