#include <stdio.h>
    int main() {
    int n, i, sum = 0;;

    printf("Enter the (N): ");
    scanf("%d", &n);

    printf("The sum of first %d even numbers is: ", n);
    for (i = 0; i <= n; i++) {
        sum += 2 * i;
    }

    printf("%d", sum);
    
    printf("\n");
    return 0;
}