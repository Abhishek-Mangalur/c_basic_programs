// Factorial of a no.

#include <stdio.h>
void main()
{
    int n,i,fact;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    fact = 1;
    i = 1;
    while(i<=n)
    {
        fact = fact * i;
        i = i + 1;
    }
    printf("Factorial of %d is %d\n", n, fact);
}