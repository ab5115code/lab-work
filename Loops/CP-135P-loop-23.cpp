#include <stdio.h>
int main()
{
    int number, digit, sum = 0;
    printf("Please enter a number: ");
    scanf("%d", &number);

    while(number>0){
        digit = number%10;
        sum += digit;
        number = number/10;
    }
    printf("The sum of digits in the number is: %d\n", sum);
}