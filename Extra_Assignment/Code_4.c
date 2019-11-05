#include <stdio.h>

/*
    Write a program in C and count the number of odd and even array variables.
*/

int main ()
{
    int counter = 0;

    printf("Please input length of array: ");
    scanf("%i", &counter);

    int inputArray[counter];

    printf("Now, please input the variables of the array (int only): ");
    
    for (int i = 0; i < counter; i++)
    {
        scanf("%i", &inputArray[i]);
    }

    int oddCounter = 0, evenCounter = 0;

    for (int i = 0; i < counter; i++)
    {
        if (inputArray[i] % 2 == 0)
        {
            evenCounter += 1;
        }
        else
        {
            oddCounter += 1;
        }
    }

    printf("Number of even numbers: %i\n", evenCounter);
    printf("Number of odd numbers: %i\n", oddCounter);

    return 0;
}