#include <stdio.h>
#include <math.h>

/*
    The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.

    Find the sum of a self power taken from the user's input.
*/

int main ()
{
    int num, sum = 0;

    printf("Input your number (int only): ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        sum += pow(i, i);
    }

    printf("The sum of 1^1 to %i^%i is %i.", num, num, sum);

    return 0;
}