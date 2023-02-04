// To print n even no.

#include <stdio.h>
int main()
{
    int i = 2,n;        // declaration of variable
    printf("Enter the no. upto you want to see: ");
    scanf("%d",&n);     // reading the no.
    while (i<=n)
    {
        printf("%d\n",i);       // printing the the even no.
        i += 2;
    }
    return 0;
}
