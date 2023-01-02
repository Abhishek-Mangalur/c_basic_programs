// Swap of two no. without using temp variable

#include <stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("The numbers before swap: \nnum1 = %d \nnum2 = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("The numbers after swap: \nnum1 = %d \nnum2 = %d\n",a,b);
}