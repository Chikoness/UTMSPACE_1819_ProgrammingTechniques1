#include <stdio.h>
#include <math.h>

// Write a program that inputs three different integers from the
// keyboard, then prints the sum, the averages, the product, the
// smallest and the largest of these numbers. Use only single selection
// form of the if statement.
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main (void)
{
    int number, repeat = 1, counter = 0, sum = 0, avg = 1, product = 1, largest = -999999, smallest = 999999;
    
    while (repeat == 1)
    {
    	printf("Please input a number: ");
    	scanf("%i", &number);
    	
    	if (largest < number)
    	{
    		largest = number;
		}
		
		if (smallest > number)
		{
			smallest = number;
		}
		
		sum += number;
        product *= number;
        counter += 1;
        
        printf("Please input 1 to continue: ");
    	scanf("%i", &repeat);
	}
	
	avg = (sum * 1.0) / counter;

	printf("\nSum is %i", sum);
	printf("\nAverage is %i", avg);
	printf("\nProduct is %i", product);	
	printf("\nSmallest is %i", smallest);
	printf("\nLargest is %i", largest);	
	
	return 0;
}

// --- Testing --- //

// Please input a number: 1
// Please input 1 to continue: 1
// Please input a number: 2
// Please input 1 to continue: 1
// Please input a number: 3
// Please input 1 to continue: 0

// Sum is 6
// Average is 2
// Product is 6
// Smallest is 1
// Largest is 3

// ----------------------- //

// Please input a number: 13
// Please input 1 to continue: 1
// Please input a number: 27
// Please input 1 to continue: 1
// Please input a number: 14
// Please input 1 to continue: 0

// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

// --- Testing End --- //
