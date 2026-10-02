#include <stdio.h>
int main() {

    int number,digit,orignal, reminder = 0;
    printf("Enter the number: ");
    scanf("%d", &number);

    orignal = number; //If we assign number = orignal the last value of number will be saved to the orignal

    while( number > 0) {
        digit = number % 10;
        reminder = reminder * 10 + digit;
        number /= 10;
    }

    if (orignal == reminder) {
        printf("The number %d is a palindrome.\n", orignal);
    } else {
        printf("The number %d is not a palindrome.\n", orignal);
    }
}