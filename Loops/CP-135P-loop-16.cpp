#include <stdio.h> 
int main() {
    int n, m, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Smallest number: %d\n", n);
    
    for(i = 0; i < 100; i++)
        n += 1;

    m = n;
    
    printf("Largest number: %d", m);

    return 0;
} 

