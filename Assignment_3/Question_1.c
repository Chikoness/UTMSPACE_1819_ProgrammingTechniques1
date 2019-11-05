#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	FILE *fileRead, *fileOut;
	fileRead = fopen("file.dat", "r");
	fileOut = fopen("file.out", "w");
	
	float mark1, mark2, mark3, mark4, mark5, summark, avgmark;
	char name[25];
	
	fprintf(fileOut, "STUDENTS                ENG\tMATH\tSCI\tHSTRY\tARTS\tSUM\tAVG\n");
	fprintf(fileOut, "---------------------------------------------------------------------------------------------------------\n");
	
	int counter;
	for (counter = 0; counter < 6; counter = counter + 1)
	{
		fgets (name, 25, fileRead);
		fscanf(fileRead, "%f%f%f%f%f\n", &mark1, &mark2, &mark3, &mark4, &mark5);
	
		summark = mark1 + mark2 + mark3 + mark4 + mark5;
		avgmark = summark / 5.0;
		
		fputs(name, fileOut);
		fprintf(fileOut, "%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", mark1, mark2, mark3, mark4, mark5, summark, avgmark);
		
		puts(name);
		printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f\n", mark1, mark2, mark3, mark4, mark5, summark, avgmark);
	}
	
	fclose(fileRead);
	fclose(fileOut);
	
	return 0;
}
