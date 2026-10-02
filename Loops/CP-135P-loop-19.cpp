#include <stdio.h>
int main() {

    printf("Multiples of 5 between 1 and 100:\n");
    
    for(int i = 1; i <= 100; i++) {
        if(i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}