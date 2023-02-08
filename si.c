// Simple Interest

#include <stdio.h>
void main()
{
    int a,b,c;      // declaration of variable
    float si;
    printf("Enter the p,t,r:\n");
    scanf("%d%d%d",&a,&b,&c);       // reading values
    si = (a*b*c)/100;       // condition checking
    printf("Simple Interest is = %f",si);       // printing result
}
