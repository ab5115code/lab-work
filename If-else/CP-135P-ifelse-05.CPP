#include <stdio.h>
 #include <conio.h>
 int main()
 {
   float net,gross,discount;
   clrscr();

   printf("Enter Gross Sales:");
   scanf("%f",&gross);

   if (gross > 20000) {
      discount = gross * 0.15;
   } else if (gross > 10000) {
      discount = gross * 0.10;
   } else {
      discount = gross * 0.05;
   }

   net = gross - discount;

   printf("Discount = %.2f\n",discount); \\next line starts after \n
   printf("Net sales = %.2f",net);
   
   getch();
   return 0;
 } 