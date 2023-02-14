// Swap of two no. using temp variable

#include <stdio.h>
void main()
{
    int a,b,temp;           // declaration of variable
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);            // reading two no.
    printf("The numbers before swap: \nnum1 = %d \nnum2 = %d\n",a,b);   
    temp = a;       // swaping condition
    a = b;
    b = temp;
    printf("The numbers after swap: \nnum1 = %d \nnum2 = %d\n",a,b);    // result
}
