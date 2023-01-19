// To compute the sum of series 1 + X + X^2 + X^3 + X^4 + ...... + X^n using while statement

#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, sum, i;
    printf("Enter the value of x:\t");
    scanf("%d", &x);
    printf("Enter the value of n and it should be greater than 0:\t");
    scanf("%d",&n);
    sum = 1;
    i = 1;
    while(i<=n)
    {
        sum += pow(x,i);
        i = i + 1;
    }
    printf("sum of series is %d", sum);
    return 0;
}