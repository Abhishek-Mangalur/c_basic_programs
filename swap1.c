// Swap of two no. without using temp variable

#include <stdio.h>
void main()
{
    int a,b;        // declaration of variable
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);        // reading two no.
    printf("The numbers before swap: \nnum1 = %d \nnum2 = %d\n",a,b);
    a = a + b;          // swaping the no.
    b = a - b;
    a = a - b;
    printf("The numbers after swap: \nnum1 = %d \nnum2 = %d\n",a,b);        // printing the result
}
