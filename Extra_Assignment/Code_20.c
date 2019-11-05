#include <stdio.h>

/*
    Calculate the CGPA of your accumulated marks.
 
    From UTM's buku peraturan: 
    100 - 90 (A+  4.00)
     89 - 80 (A   4.00)
     79 - 75 (A-  3.67)
     74 - 70 (B+  3.33)
     69 - 65 (B,  3.00)
     64 - 60 (B-  2.67)
     59 - 55 (C+  2.33)
     54 - 50 (C   2.00)
     49 - 45 (C-  1.67)
     44 - 40 (D+  1.33)
     39 - 35 (D   1.00)
     34 - 30 (D-  0.67)
     29 - 0  (E   0.00)
*/

int main ()
{
    int mark, iter = 1, counter = 0;
    float cgpa = 0, gpa;

    while (iter == 1)
    {
        printf("Input a mark: ");
        scanf("%i", &mark);

        if (mark >= 90 && mark <= 100)
        {
            gpa = 4.00;
            printf("A+ ; 4.00 GPA.");
        }
        else if (mark >= 80 && mark < 90)
        {
            gpa = 4.00;
            printf("A ; 4.00 GPA.");
        }
        else if (mark >= 75 && mark < 80)
        {
            gpa = 3.67;
            printf("A- ; 3.67 GPA.");
        }
        else if (mark >= 70 && mark < 75)
        {
            gpa = 3.33;
            printf("B+ ; 3.33 GPA.");
        }
        else if (mark >= 65 && mark < 70)
        {
            gpa = 3.00;
            printf("B ; 3.00 GPA.");
        }
        else if (mark >= 60 && mark < 65)
        {
            gpa = 2.67;
            printf("B- ; 2.67 GPA");
        }
        else if (mark >= 55 && mark < 60)
        {
            gpa = 2.33;
            printf("C+ ; 2.33 GPA");
        }
        else if (mark >= 50 && mark < 55)
        {
            gpa = 2.00;
            printf("C ; 2.00 GPA");
        }
        else if (mark >= 45 && mark < 50)
        {
            gpa = 1.67;
            printf("C- ; 1.67 GPA");
        }
        else if (mark >= 40 && mark < 45)
        {
            gpa = 1.33;
            printf("D+ ; 1.33 GPA");
        }
        else if (mark >= 35 && mark < 40)
        {
            gpa = 1.00;
            printf("D ; 1.00 GPA");
        }
        else if (mark >= 30 && mark < 35)
        {
            gpa = 0.67;
            printf("D- ; 0.67 GPA");
        }
        else if (mark >= 0 && mark < 30)
        {
            gpa = 0.00;
            printf("E ; 0.00 GPA");
        }

        cgpa += gpa;
        counter++;

        printf("\nPress 1 to continue calculate CGPA, press 0 to stop: ");
        scanf("%i", &iter);
    }

    printf("\nYour CGPA is %.2f. Keep up the good work.", cgpa /= counter);

    return 0;
}