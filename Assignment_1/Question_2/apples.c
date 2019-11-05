#include <stdio.h>

// Compute and display the cost of apples given the
// number of kilograms (kg) purchased and the prices per
// kilogram of apples.
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main() 
{
	float amount, cost, total;
	
	printf("Insert the amount (kg): ");
	scanf("%f", &amount);
	
	printf("Insert the cost per kg (RM): ");
	scanf("%f", &cost);
	
	total = amount * cost;
	
	printf("\nTotal is RM%.2f\n", total);
}

// --- Testing --- //

// Insert the amount (kg): 2
// Insert the cost per kg (RM): 5

// Total is RM10.00

// --------------------------- //

// Insert the amount (kg): 10
//Insert the cost per kg (RM): 10

// Total is RM100.00

// --------------------------- //

// Insert the amount (kg): 50
// Insert the cost per kg (RM): 2.50

//Total is RM125.00

// --- Testing End --- //

