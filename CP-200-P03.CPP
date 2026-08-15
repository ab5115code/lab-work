#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b,c;
	printf("Enter 2 nos.:");
	scanf("%d%d",&a,&b);
	c = a - b;
	printf("%d - %d = %d\n",a,b,c);
	getch();
	return 0;
}
