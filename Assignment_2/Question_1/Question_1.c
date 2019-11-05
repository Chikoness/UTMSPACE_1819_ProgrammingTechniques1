#include <stdio.h>

// Take in a Farenheit temperature and convert to Celcius
// -----Charlene Ng Andrew, SX180355CSJS04-----

int main (void)
{
	float fahrenheit, celcius;
	
	printf("Please enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
	
	printf("\nYour temperature in Celcius is: %.2f \n", celcius);
	return 0;
}

// --- Testing --- //

// Please enter Fahrenheit temperature: 10

// Your temperature in Celcius is: -12.22

// ----------------------- //

// Please enter Fahrenheit temperature: 100

// Your temperature in Celcius is: 37.78

// --- Testing End --- //
