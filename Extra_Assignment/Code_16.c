#include <stdio.h>

/*
    Consider a staircase of size n = 4

       #
      ##
     ###
    ####

    Observe that its base and height are both equal to n, and the image is drawn 
    using # symbols and spaces. The last line is not preceded by any spaces.

    Write a program that prints a staircase of size n.

    Question from:
    https://www.hackerrank.com/challenges/staircase/
*/

int main ()
{
    int n, i, j, k;

    printf("Please input the desired height of the staircase: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (k = 0; k <= i - 1; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}