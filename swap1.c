// Swap of two no. without using temp variable

#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The numbers before swap: \nnum1 = %d \nnum2 = %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The numbers after swap: \nnum1 = %d \nnum2 = %d\n",a,b);
}