#include <stdio.h>

/*
    HackerLand University has the following grading policy:
        - Every student receives a grade in the inclusive range from 0 to 100. 
        - Any grade less than 40 is a failing grade.

    Sam is a professor at the university and likes to round each student's grade 
    according to these rules:
        - If the difference between the grade and the next multiple of 5 is less than 3, 
          round grade up to the next multiple of 5.
        - If the value of grade is less than 38, no rounding occurs as the result will still 
          be a failing grade.

    For example, grade = 84 will be rounded to 85 but grade = 29 will not be rounded because the 
    rounding would result in a number that is less than 40.

    Given the initial value of grade for each of Sam's n students, write code to automate the 
    rounding process.

    Question from: 
    https://www.hackerrank.com/challenges/grading/
*/

int main ()
{
    int arrNum;

    printf("Please input the number of grades to be calculated: ");
    scanf("%i", &arrNum);

    int gradesArr[arrNum];

    printf("Now, please input the grades according to the number before (int only): ");

    for (int i = 0; i < arrNum; i++)
    {
        scanf("%i", &gradesArr[i]);
    }

    printf("The current grades are: ");

    // Print the current grades
    for (int i = 0; i < arrNum; i++)
    {
        printf("%i ", gradesArr[i]);
    }

    // Calculate grades
    for (int i = 0; i < arrNum; i++)
    {
        if (gradesArr[i] >= 38 && gradesArr[i] % 5 >= 3)
        {
            gradesArr[i] = gradesArr[i] + 5 - (gradesArr[i] % 5);
        }
    }

    printf("\nThe new grades are: ");

    // Print the new grades
    for (int i = 0; i < arrNum; i++)
    {
        printf("%i ", gradesArr[i]);
    }

    return 0;
}