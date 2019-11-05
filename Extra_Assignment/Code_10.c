#include <stdio.h>

/*
    Takes a number of inputs from the users and determine if the sum of the inputs is odd or even.
*/

int main ()
{
    int num;

    printf("How many numbers do you wish to input? ");
    scanf("%i", &num);

    float numArray[num];

    printf("Now input your numbers: ");

    for (int i = 0; i < num; i++)
    {
        scanf("%f", &numArray[i]);
    }

    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        sum += numArray[i];
    }

    if (sum % 2 == 0)
    {
        printf("The sum of all the numbers is %i. It is EVEN.", sum);
    }
    else if (sum % 2 != 0)
    {
        printf("The sum of all the numbers is %i. It is ODD.", sum);
    }

    return 0;
}