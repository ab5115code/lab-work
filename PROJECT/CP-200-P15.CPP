#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter degree fahrenheit:");
	scanf("%d",&a);
	b = (a - 32) * 5/9;
	printf("Celcius = %d C\n",b);
	getch();
	return 0;
}
