// Factorial of a no.

#include <stdio.h>
void main()
{
    int n,i,fact;       // declaration of variagle
    printf("Enter the value of n: ");
    scanf("%d", &n);        // reading a no.
    fact = 1;
    i = 1;
    while(i<=n)
    {
        fact = fact * i;    // calculating the facorial
        i = i + 1;
    }
    printf("Factorial of %d is %d\n", n, fact);     // print the factorial result
}
