// To compute the sum of series 1 + X + X^2 + X^3 + X^4 + ...... + X^n using while statement

#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, sum, i;       // declaration of variable
    printf("Enter the value of x:\t");
    scanf("%d", &x);        // reading coefficient
    printf("Enter the value of n and it should be greater than 0:\t");
    scanf("%d",&n);         // reading the power of coefficient
    sum = 1;
    i = 1;
    while(i<=n)
    {
        sum += pow(x,i);        // calculating all sum
        i = i + 1;          // incrementing next value
    }
    printf("sum of series is %d", sum);         // printing the sum
    return 0;
}
