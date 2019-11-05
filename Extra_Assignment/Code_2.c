#include <stdio.h>

/*
    Write a C program to find the sum of first 10 natural numbers. 
*/

int main () 
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += nums[i];
    }

    printf("The sum of the first 10 natural numbers is = %i.", sum);

    return 0;
}