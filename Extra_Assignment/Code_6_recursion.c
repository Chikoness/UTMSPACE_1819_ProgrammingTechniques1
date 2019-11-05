#include <stdio.h>

/** 
    __RECURSION__
    The Euclidean Algorithm for finding GCD(A,B) is as follows:

    - If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.  
    - If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.  
    - Write A in quotient remainder form (A = B⋅Q + R)
    - Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)
**/

int GCD(int A, int B);

int main() {
    int num1, num2;
    
    printf("Euclid's Algorithm - Input 2 numbers to find its GCD (Greatest Common Divisor): ");
    scanf("%i %i", &num1, &num2);

    printf("Answer : %i", GCD(num1, num2));

    return 0;
}

int GCD(int A, int B) {
    int R;

    if (A == 0 && B == 0) {
        return 0;
    } 
    else if (A == 0 && B != 0) {
        return B;
    }
    else if (A != 0 && B == 0) {
        return A;
    }
    else
    {
        R = A % B;
        return GCD(B, R);
    }
}