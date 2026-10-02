#include <stdio.h>

int main(){

    int number, i;
    printf("Enter the number: ");
    scanf("%d", &number); //After scanf funtion we press enter because of that new line is printed in the output

    printf("The factors of %d are: ", number);
    
    for(i = 1; i <= number; i++){
        if(number % i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}