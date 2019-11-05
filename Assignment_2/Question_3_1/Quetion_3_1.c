#include <stdio.h>

// Method 1: Using modulus(%) to find if a number is even or odd
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main (void)
{
	int num;
	
	printf("Please enter a number: ");
	scanf("%i", &num);
	
	if (num % 2 == 0)
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
