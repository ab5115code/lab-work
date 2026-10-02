#include <stdio.h>

int main() {

    int number,digit,orignal,cube = 0;

    printf("Enter the number:");
    scanf("%d", &number);

    orignal = number; // orignal input is saved in the "Orignal" variable

    while(number > 0){
        digit = number % 10;
        cube = cube + (digit*digit*digit);
        number /= 10;
    }

    if(orignal == cube)
        printf("%d is a armstrong number", orignal);
    else
        printf("%d is not a armstrong number", orignal);
    
}
