#include <stdio.h>

/*
    Write a program in C to find the sum of the series 1 + 11 + 111 + 1111 + .. n terms.
*/

int main ()
{
    int n;
    long int sum = 0, times = 1;

    printf("Input an int : ");
    scanf("%i", &n);

    printf("1 + ");

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%i", times);
        }
        else
        {
            printf("%i + ", times);
        }
        sum += times;
        times = (times * 10) + 1;
    }

    printf("\nThe sum is %i.", sum);
}