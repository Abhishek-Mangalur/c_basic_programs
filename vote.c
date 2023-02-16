// Voting eligibility check

#include<stdio.h>
void main()
{
    int age;        // declaration of variable
    printf("Enter the age:\n");
    scanf("%d",&age);           // reading the age
    if(age >= 18)               // condition checking 
        printf("Person is eligible for voting\n");          // printing eligible result
    if(age < 18)
        printf("Person is not eligible for voting\n");      // printing non eligible result
}
