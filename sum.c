// Sum of n natural no.

#include <stdio.h>
void main()
{
    int n,i,sum;        // declaration of variable
    printf("Enter the value of n: ");
    scanf("%d", &n);        // reading the no.
    sum=0;
    i=1;
    while(i<=n)         // condition checking
    {
        sum += i;       // addition of n terms
        i += 1;         // i value is incrementing
    }
    printf("Sum of first %d natural number is %d\n", n, sum);       // printing the sum
}
