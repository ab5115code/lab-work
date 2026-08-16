#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a;
	float b;
	printf("Enter Dollars:");
	scanf("%d",&a);
	b = a * (48.20/70.0);    //1$ = rs * 48/70 pounds.
	printf("Pounds = %.2f pounds.\n",b);
	getch();
	return 0;
}
