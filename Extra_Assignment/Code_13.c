#include <stdio.h>

/*
    Write a C program to check if a given array of integers contains a 3 or a 5.
*/

int main ()
{
    int num, count;

    printf("Enter the desired length of the array: ");
    scanf("%i", &num);

    int arr[num];

    printf("Enter the array variables: ");

    for (int i = 0; i < num; i++)
    {
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == 3 || arr[i] == 5)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("This array contains a 3 or 5.");
    }
    else
    {
        printf("This array does not contain a 3 nor a 5.");
    }

    return 0;
}