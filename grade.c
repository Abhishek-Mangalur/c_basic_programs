// Grading System

#include<stdio.h>
void main()
{
    int marks;
    printf("Enter the marks:\n");
    scanf("%d",&marks);
    if(marks <= 39)
        printf("Grade F (Fail)\n");
    else if(marks <= 49)
        printf("Grade E\n");
    else if(marks <= 59)
        printf("Grade D\n");
    else if(marks <= 69)
        printf("Grade C\n");
    else if(marks <= 79)
        printf("Grade B\n");
    else if(marks <= 89)
        printf("Grade A\n");
    else if(marks <= 100)
        printf("Grade O (Outstanding)\n");
    else
        printf("You have entered more than 100 marks\n");
}
