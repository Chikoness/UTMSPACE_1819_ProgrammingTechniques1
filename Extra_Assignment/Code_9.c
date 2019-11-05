#include <stdio.h>
#include <stdlib.h>

int main () 
{
    FILE *fileIn, *fileOut;
    int counter;
    char name[8];
    char gender;

    fileIn = fopen("personalInfo.dat", "r");
    fileOut = fopen("personalInfo.out", "w");

    fprintf(fileOut, "Name\tGender\n");
    fprintf(fileOut, "===================\n");

    for (counter = 0; counter < 10; counter++)
    {
        fgets(name, 8, fileIn);
        fscanf(fileIn, "%c\n", &gender);

        fputs(name, fileOut);
        fprintf(fileOut, "%c", gender);
    }

    fprintf(fileOut, "\n===================\n");

    fclose(fileIn);
    fclose(fileOut);
    
    return 0;
}