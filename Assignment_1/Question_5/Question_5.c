#include <stdio.h>

// Factorial
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main()
{
	int number, factorial = 1;
	
	printf("Please enter a number for factorial: ");
	scanf("%i", &number);
	
	for (int i = 1; i < number; ++i)
	{
		factorial = factorial * (i + 1);
	}
	
	printf("\nThe factorial of %i is %i\n", number, factorial);
}

// --- Testing --- //

// Please enter a number for factorial: 5

// The factorial of 5 is 120

// ---------------------------- //

// Please enter a number for factorial: 10

// The factorial of 10 is 3628800

// ---------------------------- //

// Please enter a number for factorial: 15

// The factorial of 15 is 2004310016

// --- Testing End --- //
