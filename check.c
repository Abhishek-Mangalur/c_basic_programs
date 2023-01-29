// To check no. is positive or not 

#include<stdio.h>
void main()
{
    int n;      // declaration of variable
    printf("Enter the number: \n");
    scanf("%d", &n);    // intake a no.
    if(n == 0)
        printf("The no. is neither positive nor negative");
    if(n > 0)       // checking the no. is positive or not
        printf("Number is positive\n");
    if(n < 0)       // checking the no. is negative
        printf("Number is negative\n");
}
