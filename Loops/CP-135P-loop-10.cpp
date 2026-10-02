#include <stdio.h>
    int main() {
    int n, i, factorial = 1;

    printf("Enter the (N): ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    } else if(n == 0) {
        printf("The factorial of 0 is: 1\n");
        return 0;
    } else {
        printf("The %d! is: ", n);
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("%d", factorial);
    }
    
    
    printf("\n");
    return 0;
}