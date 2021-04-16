#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include "my_header.h"

#define KEY "Enter the Operation:"

// Function prototype declaration

// Start of Main Program
int main()
{
    char operation;

    // Function call
    all_operations();

    while (1)
    {
        printf("\n");
        printf("%s : ", KEY);

        operation = getche();

        switch (operation)
        {
        case '+':
            addition();
            break;

        case '-':
            subtraction();
            break;

        case '*':
            multiplication();
            break;

        case '/':
            division();
            break;

        case '!':
            factorial();
            break;

        case '^':
            power();
            break;

        case 'E':
        case 'e':
            exit(0);
            break;

        default:
            printf("\n\n**********Oh No! You have entered unavailable option. Try again***********\n\n");
        }
    }
}
