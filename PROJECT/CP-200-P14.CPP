#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter degree celcius:");
	scanf("%d",&a);
	b = (a * 9/5) + 32;
	printf("Fahrenheit = %d F\n",b);
	getch();
	return 0;
}
