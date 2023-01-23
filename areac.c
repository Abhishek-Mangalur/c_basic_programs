// Area of circle

#include <stdio.h>
#define PI 3.14
void main()
{
    float r,res;    // declaring a variable
    printf("Enter the radius:\n");
    scanf("%f",&r);     // intake of radius
    res = PI*r*r;   // calculating result
    printf("Area of circle = %f", res);  // printing result 
}
