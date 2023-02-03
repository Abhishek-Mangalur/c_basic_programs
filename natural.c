// To find first n natural no.

#include<stdio.h>
void main()
{
    int n;      // declaration of variable
    printf("Enter the n natural no.: ");
    scanf("%d",&n);     // reading the no.
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);       // printing the result
    }
}
