#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter dollars:");
	scanf("%d",&a);
	b = a * 48;    //1$ = 48Rs.
	printf("Rupees = %dRs.\n",b);
	getch();
	return 0;
}
