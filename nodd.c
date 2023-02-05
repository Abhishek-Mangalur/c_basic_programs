// To print n even no.

#include <stdio.h>
int main()
{
    int i = 1,n;        // declaration of variable
    printf("Enter the no. upto you want to see: ");
    scanf("%d",&n);     // reading a no.
    while (i<=n)        // chicking the condition
    {
        printf("%d\n",i);       // printing the result
        i += 2;
    }
    return 0;
}
