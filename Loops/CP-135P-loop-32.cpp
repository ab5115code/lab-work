#include <stdio.h>
int main() {

    int i,n,value = 0;

    for(i = 2; i <= 500; i++){
        for(n = 2; n < i; n++){
            if( i % n == 0){
                break;
            }
        }
            if(i == n)
                value ++;    
    }

    printf("The total number of prime numbers between 1 to 500 is: %d", value);

}