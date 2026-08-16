#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter Rupees:");
	scanf("%d",&a);
	b = a / 48;    //1$ = 48Rs.
	printf("Dollars = %d$.\n",b);
	getch();
	return 0;
}
