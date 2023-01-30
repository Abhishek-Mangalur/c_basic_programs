// To check no. is positive or not with odd or even

#include<stdio.h>
void main()
{
    int n;      // declaration of variable
    printf("Enter the number: \n");
    scanf("%d", &n);    // intake a no.
    if(n == 0)
        {
            printf("The no. is neither positive nor negative\n");
            printf("And it is even no.\n");
        }
    else if(n > 0)       // checking the no. is positive or not
        {
            if(n%2 == 0)
                printf("The no. is positive even\n");
            else
                printf("The no. is positive odd\n");
        }
    else if(n < 0)       // checking the no. is negative
        {
            if(n%2 == 0)
                printf("The no. is negative even\n");
            else
                printf("The no. is negative odd\n");
        }
}