#include <stdio.h> 
int main() {

    int n,i,sum = 0,total = 1,grandtotal;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("fibonacci series till %d numbers is: ",n);
    for(i = 1; i <= n; i++) {               // 0 + 1 = 1, 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5
        printf("\n %d", total);
          
        grandtotal = sum + total;  
        sum = total;
        total = grandtotal;
    }
    

}


