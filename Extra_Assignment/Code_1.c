#include <stdio.h>

/*
    Take an array length and its' variable from user, display the array in descending order.
*/

int main ()
{
    int counter, temp;
    
    printf("Enter desired length of the array: ");
    scanf("%i", &counter);

    int nums[counter];

    printf("Now enter %i number of numbers (int only): ", counter);

    for (int i = 0; i < counter; i++)
    {
        scanf("%i", &nums[i]);
    }
    
    for (int i = counter; i >= 0; i--)
    {
        for (int j = counter - 1; j >= 0; j--)
        {            
            if (nums[j] > nums[i])
            {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }

    printf("The numbers in descending orders are: ");

    for (int i = 0; i < counter; i++)
    {
        if (nums[i] == nums[counter - 1])
        {
            printf("and %i.", nums[i]);
        }
        else
        {
            printf("%i, ", nums[i]);
        }
    }

    return 0;
}