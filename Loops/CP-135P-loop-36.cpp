#include <stdio.h>

int main() {

    int i,j;

//(a)    
    for(i = 1, j = 5; i <= 5, j >= 1; i++, j--){
        printf(" %d %d\n", i, j);
    }

     printf("\n");

//(b)
    for(i = 1, j = 5; i <= 3, j >= 3; i++, j--){
        printf(" %d %d\n", i, j);
        printf(" %d %d\n", i, j);
    }
 
}

   

