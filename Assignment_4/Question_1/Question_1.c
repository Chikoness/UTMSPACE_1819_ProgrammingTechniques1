#include <stdio.h>
#include <math.h>

float addition(float x, float y);
float subtraction (float x, float y);
float multiplication (float x, float y);
float division(float x, float y);

int main () 
{
	float num1, num2, add, sub, mul, div;
	
	printf("Enter 2 numbers: ");
	scanf("%f %f", &num1, &num2);
	
	add = addition(num1, num2);
	sub = subtraction(num1, num2);
	mul = multiplication(num1, num2);
	div = division(num1, num2);
	
	printf("\nAddition = %.2f", add);
	printf("\nSubtraction = %.2f", sub);
	printf("\nMultiplication = %.2f", mul);
	printf("\nDivision = %.2f\n", div);
	
	return 0;
}

float addition(float x, float y)
{
	return x + y;
}

float subtraction(float x, float y)
{
	return x - y;
}

float multiplication(float x, float y)
{
	return x * y;
}

float division(float x, float y)
{
	return x / y;
}
