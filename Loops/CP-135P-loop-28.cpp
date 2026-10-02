#include <stdio.h>

int main(){

    int number, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    for(i = 1; i <= number; i++){
        if(number % i == 0){
            if(i <= (number/2))
                sum += i;
        } 
    }

    if( sum == number)
        printf("%d is a perfect no.", number);
    else
        printf("%d is not a perfect no.", number);    
    return 0;
}