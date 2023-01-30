// Bigger of two numbers

#include<stdio.h>
void main()
{
    int a, b, big;  // declaration of variable 
    printf("Enter the value of a:\n");
    scanf("%d",&a);     // intake of 1st no.
    printf("Enter the value of b:\n");
    scanf("%d",&b);     // intake of 2nd no.
    big = (a>b) ? a : b;    // checking which no. is big?
    printf("The bigger no is: %d\n", big);  // printing biggest no.
}
