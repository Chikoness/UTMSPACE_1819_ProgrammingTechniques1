#include <stdio.h>

/** 
    __ITERATION__
    The Euclidean Algorithm for finding GCD(A,B) is as follows:

    - If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
    - If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
    - Write A in quotient remainder form (A = B⋅Q + R)
    - Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)
**/

int main() {
    int num1, num2, remain;
    
    printf("Euclid's Algorithm - Input 2 numbers to find its GCD (Greatest Common Divisor): ");
    scanf("%i %i", &num1, &num2);

    remain = num1 % num2;

    while (remain != 0)
    {
        num1 = num2;
        num2 = remain;
        remain = num1 % num2;
    }

    printf("Answer : %i", num2);

    return 0;
}