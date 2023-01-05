// Voting eligibility check

#include<stdio.h>
void main( )
{
    int age;
    printf("Enter the age:\n");
    scanf("%d",&age);
    if(age >= 18)
        printf("Person is eligible for voting\n");
    if(age < 18)
        printf("Person is not eligible for voting\n");
}