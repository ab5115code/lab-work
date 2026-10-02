#include <stdio.h>

int main() {
    int num, temp, square;
    int isAutomorphic = 1; // 1 means True, 0 means False

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate square of the number
    square = num * num;
    temp = num;

    // Loop to check last digits of square with the number
    while (temp > 0) {
        
        if (square % 10 != temp % 10) {
            isAutomorphic = 0; 
            break;
        }
        
        square = square / 10;
        temp = temp / 10;
    }

    
    if (isAutomorphic == 1 && num >= 0) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is NOT an Automorphic number.\n", num);
    }

    return 0;
}
