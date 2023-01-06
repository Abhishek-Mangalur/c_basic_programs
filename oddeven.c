// To check the no. is odd or even 

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    if(n % 2 == 0)
    printf("Number is even\n");
    if(n % 2 != 0)
    printf("Number is odd\n");
}