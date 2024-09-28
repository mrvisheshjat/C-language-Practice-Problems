// Given two non-negative integers num1 and num2, we have to find their GCD (greatest common divisor),i.e. the largest number which is a divisor of both num1 and num2

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("\nEnter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}