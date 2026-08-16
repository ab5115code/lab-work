#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter hours:");
	scanf("%d",&a);
	b = a * 60;
	printf("Minutes = %dmin\n",b);
	getch();
	return 0;
}

