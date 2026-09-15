#include <stdio.h>
int main() {

    char name[] = "Aditya Bhavsar";
    int n,i;

    printf("Enter the number of times to print the name: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
        printf("%s\n", name);

    return 0;
}
