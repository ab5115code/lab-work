#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter minutes:");
	scanf("%d",&a);
	b = a / 60;
	printf("hours = %dmin\n",b);
	getch();
	return 0;
}
