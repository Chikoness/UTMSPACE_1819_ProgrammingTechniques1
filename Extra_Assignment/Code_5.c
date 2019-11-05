#include <stdio.h>

/*
Algorithm
1. Start
2. Declare variables for counter and to store the formula of triangular number - i and triangularNumber
3. Print "Triangular Number: "
4. Start for loop with counter i = 5
5. If i <= 50, go to next step. Else, go to step 10
6. Calculate triangularNumber = i * (i + 1) / 2
7. Print the value of triangularNumber
8. Calculate counter i + 5
9. Go back to step 5
10. End
*/

int main ()
{
    int i, triangularNumber;
    printf("Triangular Number: ");
    
    for (i = 5; i <= 50; i+=5)
    {
        triangularNumber = i * (i + 1) / 2;
        printf("%d ", triangularNumber);
    }

    return 0;
}