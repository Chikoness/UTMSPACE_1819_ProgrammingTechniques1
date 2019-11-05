#include <stdio.h>
#include <math.h>

/*
    Write a program in C to display the cube of the number up to given an integer.
*/

int main ()
{
    int givenInt;
    
    printf("Give an integer to display the cube of number up to given said integer: ");
    scanf("%i", &givenInt);

    int nums[givenInt];

    for (int i = 1; i <= givenInt; i++)
    {
        nums[i] = i;
    }

    for (int i = 1; i <= givenInt; i++)
    {
        printf("The number %i cubed is = %.0f\n", nums[i], pow(nums[i], 3));
    }

    return 0;
}