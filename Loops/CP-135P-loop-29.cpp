#include <stdio.h>
int main() {
    
    int number,i;

    printf("Enter the number: ");
    scanf("%d", &number);

    for(i = 2; i < number; i++) {
        if(number % i == 0) {
            printf("%d is not a prime number.", number);
            break;
        }
    }
    if(i == number) {
        printf("%d is a prime number.", number);
    }
    return 0;
}