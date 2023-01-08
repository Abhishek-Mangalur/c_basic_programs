// Sum of n natural no.

#include <stdio.h>
void main()
{
    int n,i,sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum=0;
    i=1;
    while(i<=n)
    {
        sum += i;
        i += 1;
    }
    printf("Sum of first %d natural number is %d\n", n, sum);
}
