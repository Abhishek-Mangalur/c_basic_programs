// To check the no. is odd or even 

#include <stdio.h>
void main()
{
    int n;      // variable declaration
    printf("Enter the number: \n");
    scanf("%d", &n);        // reading variable
    if(n % 2 == 0)      // even condition checking
    printf("Number is even\n");     // priting the even no.
    if(n % 2 != 0)      // odd condition checking
    printf("Number is odd\n");      // printing the odd no.
}
