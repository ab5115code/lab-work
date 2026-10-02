#include <stdio.h>
 #include <conio.h>
 int main()
 {
   int a,b,c;
   clrscr();

   printf("Enter three numbers:");
   scanf("%d%d",&a,&b,&c);

   if (a > b && a > c){
	   printf("Largest = %d\n",a);
   } else if (b > c && b > a) {
	   printf("Largest = %d\n",b);
   } else {
      printf("Largest = %d\n",c)
   }

   if (a < b && a < c){
	   printf("Smallest = %d\n",a);
   } else if (b < c && b < a) {
	   printf("Smallest = %d\n",b);
   } else {
      printf("Smallest = %d\n",c)
   }

   getch();
   return 0;
 } 