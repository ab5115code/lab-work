#include <stdio.h> 
int main() {

    int n, i, sum = 0;
    float mean;

    printf("Enter 10 values: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        sum += n;
    }
    mean = sum / 10;
    printf("The sum of the values is: %d\n", sum);
    printf("The mean of the values is: %.2f\n", mean);
    return 0;
}