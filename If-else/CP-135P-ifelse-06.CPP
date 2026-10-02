
#include <stdio.h>
#include <conio.h>

void main()
{
    float m1, m2, m3, total, average;

    clrscr();

    printf("Enter marks of three subjects: ");
    scanf("%f%f%f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    printf("\nTotal = %.2f", total);
    printf("\nAverage = %.2f", average);

    if(average >= 70)                      //we don't need to use curly brackets in if-else statement if we 
        printf("\nGrade = Distinction");   //have only 1 statement like this
    else if(average >= 60)
        printf("\nGrade = First Class");
    else if(average >= 50)
        printf("\nGrade = Second Class");
    else if(average >= 35)
        printf("\nGrade = Third Class");
    else
        printf("\nGrade = Fail");

    getch();
}