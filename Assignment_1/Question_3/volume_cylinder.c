#include <stdio.h>
#include <math.h>

// Calculate and display the volume of a cylinder.
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main() 
{
	float high, radius, volume;
	
	printf("Please enter high: ");
	scanf("%f", &high);
	
	printf("Please enter radius: ");
	scanf("%f", &radius);
	
	volume = M_PI * pow(radius, 2) * high;
	
	printf("\nVolume of the cylinder: %.2f\n", volume);
}

// --- Testing --- //

// Please enter high: 5
// Please enter radius: 3

// Volume of the cylinder: 141.37

// ----------------------- //

// Please enter high: 10
///Please enter radius: 20

// Volume of the cylinder: 12566.37

// --- Testing End --- //
