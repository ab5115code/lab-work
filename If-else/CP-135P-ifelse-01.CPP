 #include <stdio.h>
 #include <conio.h>
 int main()
 {
   int a,b;
   clrscr();

   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);

   if (a > b){
	printf("Largest = %d\n",a);
	printf("Smallest = %d\n",b);
   } else {
	printf("Largest = %d\n",b);
	printf("Smallest = %d\n",a);
   }

   getch();
   return 0;
 }