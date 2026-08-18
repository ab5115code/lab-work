#include <stdio.h>
#include <conio.h>

int main ()
{
  float a,b,c,avg,total;
  clrscr();
  printf("Enter marks of sub. a:");
  scanf("%f",&a);
  
  printf("Enter marks of sub. b:");
  scanf("%f",&b);
  
  printf("Enter marks of sub. c:");
  scanf("%f",&c);
  
  avg = (a + b + c)/3.0;
  printf("Average: %.2f",avg);
  
  t = a + b + c;
  printf("Total: %.2f",total);
  
  getch();
  return 0;
}
