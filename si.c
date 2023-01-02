// Simple Interest

#include <stdio.h>
void main()
{
    int a,b,c;
    float si;
    printf("Enter the p,t,r:\n");
    scanf("%d%d%d",&a,&b,&c);
    si = (a*b*c)/100;
    printf("Simple Interest is = %f",si);
}