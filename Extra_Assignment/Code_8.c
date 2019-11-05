#include <stdio.h>

/*
    Write a program in C to display the pattern like a pyramid using asterisk and each row 
    contain an odd number of asterisks.
*/

int main ()
{
    int count, i, j;

    printf("Enter the number of rows for this asterisk pyramid: ");
    scanf("%i", &count);

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= count - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}