// To check no. is positive or not 

#include<stdio.h>
void main( )
    {
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    if(n > 0)
        printf("Number is positive\n");
    if(n < 0)
        printf("Number is negative\n");
}
