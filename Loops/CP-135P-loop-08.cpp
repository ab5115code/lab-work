#include <stdio.h>
    int main() {
    int n, i, sum = 0;;

    printf("Enter the (N): ");
    scanf("%d", &n);

    printf("The sum of first %d odd numbers is: ", n);
    for (i = 1; i <= n; i++) {
        sum += (2 * i) - 1;
    }

    printf("%d", sum);
    
    printf("\n");
    return 0;
}