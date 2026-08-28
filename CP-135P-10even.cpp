#include <stdio.h>

int main() {
    int i = 0;
    int count = 0;
    

    do {
        printf("Even no.: %d\n", i);
        i += 2; 
        count ++;
    } while (count < 10);

    printf("Count: %d", count);

    return 0;
}
