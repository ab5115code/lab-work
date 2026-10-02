#include<stdio.h>
int main()
{
    int number, digit, count = 0;
    printf("Please enter a number: ");
    scanf("%d",&number);

    while(number>0){
        digit = number%10;

        number = number/10;
        count++;
    }
    printf("The number of digits in the number is %d\n", count);
}

