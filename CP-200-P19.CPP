#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b,c;
	printf("Enter length:");
	scanf("%d",&a);
	b = a * a ;
	c = 4 * a;
	printf("Area = %d\n",b);
	printf("Perimeter = %d\n",c);
	getch();
	return 0;
}
