// To print n even no.

#include <stdio.h>
int main()
{
    int i = 2,n;
    printf("Enter the no. upto you want to see: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\n",i);
        i += 2;
    }
    return 0;
}