#include <stdio.h>
 #include <conio.h>
 int main()
 {
   float net,gross,allowance,deduction;
   clrscr();

   printf("Enter Gross Salary:");
   scanf("%f",&gross);

   if (gross > 10000) {
      allowance = gross * 0.1;
      deduction = gross * 0.03;
   } else if (gross > 5000) {
      allowance = gross * 0.07;
      deduction = gross * 0.03;
   } else {
      allowance = gross * 0.05;
      deduction = gross * 0.01;
   }

   net = gross + allowance - deduction;

   printf("Allowance = %.2f",allowance);
   printf("Deduction = %.2f",deduction);
   printf("Net sallary = %.2f",net);
   
   getch();
   return 0;
 } 