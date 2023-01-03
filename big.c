// Bigger of two numbers

#include<stdio.h>
void main( )
{
    int a, b, big;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    big = (a>b) ? a : b;
    printf("The bigger no is: %d\n", big);
}