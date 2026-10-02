#include <stdio.h>

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    printf("The reversed number is: ");
    while( number > 0) {
        int digit = number % 10;
        printf("%d", digit);
        number /= 10;
    }                         
    
    return 0;
}
