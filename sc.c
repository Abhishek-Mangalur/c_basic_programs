//Simple Calculator

#include <stdio.h>
#include <stdlib.h>
void main()
{
    char op;        // variable declaration
    int a,b;
    float res;
    printf("Enter the operator(+,-,*,/):\n");
    scanf("%c",&op);        // reading the operator
    printf("Enter the two operands:\n");
    scanf("%d%d",&a,&b);        // reading the no.
    switch(op)
    {
        case '+' : res = a + b;     // addition exp
            break;
        case '-' : res = a - b;     // substraction exp
            break;
        case '*' : res = a * b;     // multiplication exp
            break;
        case '/' :if(b!=0)
                    {
                        res = a / b;        // division exp
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
    printf("The Result is = %f",res);       // printing the result
}
