#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter grams:");
	scanf("%d",&a);
	b = a / 1000 ;
	printf("Kilograms = %d kgs.\n",b);
	getch();
	return 0;
}