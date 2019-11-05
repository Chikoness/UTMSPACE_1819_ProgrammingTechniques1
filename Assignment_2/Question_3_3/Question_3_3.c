#include <stdio.h>

// Method 3: Using repeated subtraction of 2 to find if a number is even or odd
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main (void)
{
	int num, temp;
	
	printf("Please enter a number: ");
	scanf("%i", &num);
	
	while (num > 0)
	{
		num = num - 2;
	}
	
	if (num == 0)
	{
		printf("\nIt is an even number.\n");
	}
	else
	{
		printf("\nIt is an odd number.\n");
	}
	
	return 0;
}

// --- Testing --- //

// Please enter a number: 5

// It is an odd number.

// ----------------------- //

// Please enter a number: 32

// It is an even number.

// --- Testing End --- //
