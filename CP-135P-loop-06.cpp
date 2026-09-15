#include <stdio.h> 

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d even numbers are:\n", n);
    
    for (int i = 0; i < n; i++) 
        printf("%d ", 2 * i);
    
    return 0;
}