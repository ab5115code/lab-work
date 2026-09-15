#include <stdio.h> 
int main() {

    int n, m, i, sum = 0;
    float mean;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &m);
        sum += m;
    }
    mean = sum / n;
    printf("The sum of the values is: %d\n", sum);
    printf("The mean of the values is: %.2f\n", mean);
    return 0;
}