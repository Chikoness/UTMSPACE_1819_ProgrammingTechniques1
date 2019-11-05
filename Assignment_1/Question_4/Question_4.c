#include <stdio.h>
#include <math.h>

// You are given High of the cylinder (h) and Radius of
// the cylinder base area (r). Write a C program to
// calculate and display all the cylinder parameters.
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main() 
{
	float high, radius, diameter, perimeter, baseArea, latSurface, surface, volume;
	
	printf("Please enter high: ");
	scanf("%f", &high);
	
	printf("Please enter radius: ");
	scanf("%f", &radius);
	
	diameter = 2 * radius;
	perimeter = 2 * M_PI * radius;
	baseArea = M_PI * pow(radius, 2);
	latSurface = 2 * M_PI * radius * high;
	surface = 2 * M_PI * radius * (radius + high);
	volume = M_PI * pow(radius, 2) * high;
	
	printf("\nDiameter of the cylinder: %.2f\n", diameter);
	printf("Perimeter of the cylinder: %.2f\n", perimeter);
	printf("Base area of the cylinder: %.2f\n", baseArea);
	printf("Lateral surface of the cylinder: %.2f\n", latSurface);
	printf("Surface of the cylinder: %.2f\n", surface);
	printf("Volume of the cylinder: %.2f\n", volume);
}

// --- Testing --- //

// Please enter high: 5
// Please enter radius: 3

// Diameter of the cylinder: 6.00
// Perimeter of the cylinder: 18.85
// Base area of the cylinder: 28.27
// Lateral surface of the cylinder: 94.25
// Surface of the cylinder: 150.80
// Volume of the cylinder: 141.37

// ----------------------------- //

// Please enter high: 10
// Please enter radius: 50
	
// Diameter of the cylinder: 100.00
// Perimeter of the cylinder: 314.16
// Base area of the cylinder: 7853.98
// Lateral surface of the cylinder: 3141.59
// Surface of the cylinder: 18849.56
// Volume of the cylinder: 78539.81

// --- Testing End --- //
