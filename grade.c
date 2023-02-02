// Grading System

#include<stdio.h>
void main()
{
    int marks;      // variable declaration
    printf("Enter the marks:\n");
    scanf("%d",&marks);     // reading the marks
    if(marks <= 39)     // condition checking
        printf("Grade F (Fail)\n");     // printing the grade
    else if(marks <= 49)        // condition checking
        printf("Grade E\n");        // printing the grade
    else if(marks <= 59)        // condition checking
        printf("Grade D\n");        // printing the grade
    else if(marks <= 69)        // condition checking
        printf("Grade C\n");        // printing the grade
    else if(marks <= 79)        // condition checking
        printf("Grade B\n");        // printing the grade        
    else if(marks <= 89)        // condition checking
        printf("Grade A\n");        // printing the grade
    else if(marks <= 100)       // condition checking
        printf("Grade O (Outstanding)\n");      // printing the grade
    else
        printf("You have entered more than 100 marks\n");   
}
