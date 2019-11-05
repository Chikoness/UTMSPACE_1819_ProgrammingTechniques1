#include <stdio.h>
#include <math.h>

// Write a C program to compute the straight line distance
// between two points A (-2, -1) and B (4, 5) in a plane
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main() 
{
	float x1, y1, x2, y2, lengx, lengy, dist;
	
	printf("Please enter x1: ");
	scanf("%f", &x1);
	
	printf("Please enter x2: ");
	scanf("%f", &x2);
	
	printf("Please enter y1: ");
	scanf("%f", &y1);
	
	printf("Please enter y2: ");
	scanf("%f", &y2);
	
	lengx = x2 - x1;
	lengy = y2 - y1;
	dist = (sqrt(pow(lengx, 2) + pow(lengy, 2)));
	
	printf("\nThe distance between the two point is %.2f \n", dist);
}

// --- Testing --- //

// Please enter x1: -2
// Please enter x2: 4
// Please enter y1: -1
// Please enter y2: 5

// The distance between the two point is 8.49

// ----------------------- //

// Please enter x1: 5
// Please enter x2: 10
// Please enter y1: 2
// Please enter y2: -1

// The distance between the two point is 5.83

// --- Testing End --- //
