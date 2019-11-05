#include <stdio.h>
#include <stdlib.h>

/*
    Given a square matrix, calculate the absolute difference between the sums of its diagonals.

    For example, the square matrix array is shown below:

    1 2 3
    4 5 6
    9 8 9  

    The left-to-right diagonal = 1 + 5 + 9. The right to left diagonal = 3 + 5 + 9. Their 
    absolute difference is |15 - 17| = 2. 

    Question from: 
    https://www.hackerrank.com/challenges/diagonal-difference/
*/

int main ()
{
    int matNum, i, j, k, l, count = 0, sum1 = 0, sum2 = 0;

    printf("Give a matrix number: ");
    scanf("%i", &matNum);

    int mtx[matNum][matNum];

    for (i = 0; i < matNum; i++)
    {
        printf("Now write the variables for row %i: ", i + 1);
        
        for (j = 0; j < matNum; j++)
        {
            scanf("%i", &mtx[i][j]);
        }
    }

    // Diagonal calculation
    // Diagonal 1

    for (k = 0; k < matNum; k++)
    {
        for (l = 0; l < matNum; l++)
        {
            sum1 += mtx[k][l + count];
            break;
        }

        count++;
    }

    count = 0;

    // Diagonal 2

    for (k = 0; k < matNum; k++)
    {
        for (l = matNum - 1; l >= 0; l--)
        {
            sum2 += mtx[k][l - count];
            break;
        }

        count++;
    }

    printf("The diagonal absolute difference of both diagonal set of values are: |%i - %i| = %i", sum1, sum2, abs((sum1 - sum2)));

    return 0;
}