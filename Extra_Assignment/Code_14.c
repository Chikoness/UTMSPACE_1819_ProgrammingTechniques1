#include <stdio.h>

/*
    Count Fibonacci number (Recursion)
*/

int fib(int n);

int main ()
{
    int num;

    printf("Enter an int number: ");
    scanf("%i", &num);

    printf("The Fibonacci number %i is %d.", num, fib(num));

    return 0;
}

int fib (int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}