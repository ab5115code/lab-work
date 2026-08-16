#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b,c,d;
	printf("Enter length and width:");
	scanf("%d%d",&a,&b);
	c = a * b;
	d = 2 * (a + b);
	printf("Area = %d\n",&c);
	printf("Perimeter = %d\n",&d)
	getch();
	return 0;
}
