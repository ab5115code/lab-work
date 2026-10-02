#include <stdio.h>
int main() {
    
    int i,n;

    printf("The prime numbers from 1 to 500 are: ");
    
    for(i = 2; i <= 500; i++) { 
        for(n = 2; n < i; n++) {
            if(i % n == 0) {
                break;
            }
        }
        if(n == i) {
            printf("\n%d", i);
        }
    }  
    
    return 0;
}