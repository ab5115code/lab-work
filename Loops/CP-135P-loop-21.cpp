#include <stdio.h>

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("The separated digits are: ");
    while( number > 0) {
        int digit = number % 10;
        printf("%d,", digit);
        number /= 10;
    }

    
    return 0;
}
