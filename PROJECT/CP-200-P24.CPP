#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  clrscr();

  printf("Enter two values:");
  scanf("%d%d",&a,&b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("a = %d\n",a);
  printf("b = %d\n",b);

  getch();
  return 0;

}

