#include <stdio.h>
#include <math.h>

// Calculate a Quadratic Equation and output the results
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main (void)
{
	float a, b, c, root1, root2, discriminant, real, imaginary;
	
	printf("Please enter a, b, and c of a Quadratic Equation: ");
	scanf("%f %f %f", &a, &b, &c);
	
	discriminant = pow(b, 2) - (4 * a * c);
	
	if (discriminant > 0) 
	{
		root1 = (-b + sqrt(discriminant) / (2 * a));
		root2 = (-b - sqrt(discriminant) / (2 * a));
		
		printf("\nTwo roots!\nRoot 1 : %.2f \nRoot 2 : %.2f\n", root1, root2);
	} 
	else if (discriminant == 0)
	{
		root1 = -b / (2 * a);
		
		printf("\nEqual roots!\nRoot : %.2f\n", root1);
	}
	else
	{
		real = -b / (2 * a);
		imaginary = sqrt(-discriminant) / (2 * a);
		
		printf("\nComplex roots!\nRoot 1 : %.2f+%.2fi \nRoot 2 : %.2f-%.2fi\n", real, imaginary, real, imaginary);
	}
	
	return 0;
}

// --- Testing --- //

// Please enter a, b, and c of a Quadratic Equation: 1 5 2

// Two roots!
// Root 1 : -2.94
// Root 2 : -7.06

// ----------------------- //

// Please enter a, b, and c of a Quadratic Equation: 2.3 4 5.6

// Complex roots!
// Root 1 : -0.87+1.30i
// Root 2 : -0.87-1.30i

// ----------------------- //

// Please enter a, b, and c of a Quadratic Equation: 18 12 2

// Equal roots!
// Root : -0.33

// --- Testing End --- //
