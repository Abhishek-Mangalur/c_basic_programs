//Simple Calculator

#include <stdio.h>
#include <stdlib.h>
void main()
{
    char op;
    int a,b;
    float res;
    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&op);
    printf("Enter the two operands:\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+' : res = a + b;
            break;
        case '-' : res = a - b;
            break;
        case '*' : res = a * b;
            break;
        case '/' :if(b!=0)
                    {
                        res = a / b;
                    }
                    else
                    {
                        printf("Division not possible!\n");
                        exit (0);
                    }
                    break;
        default: printf("You have entered wrong cases\n");
        exit(0);
    }
    printf("The Result is = %f",res);
}
