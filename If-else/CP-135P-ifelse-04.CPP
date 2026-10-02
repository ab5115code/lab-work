#include <stdio.h>
 #include <conio.h>
 int main()
 {
   int a;
   clrscr();

   printf("Enter a number:");
   scanf("%d",&a);

   ( a % 7 == 0) ? printf("%d is divisible by 7",a) : printf("%d is divisible by 7",a); // % compares the reminder only
   getch();
   return 0;
 }