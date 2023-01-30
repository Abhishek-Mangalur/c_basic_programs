// Biggest of three numbers

#include<stdio.h>
void main( )
{
    int a, b, c, large;     // variable declaration
    printf("Enter three numbers:\n");  
    scanf("%d%d%d", &a, &b, &c);     // intake of three values
    large = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);      // calculating
    printf("The largest number is: %d \n", large);      // printing result
}
