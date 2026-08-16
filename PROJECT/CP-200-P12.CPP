#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	printf("Enter Kgs:");
	scanf("%d",&a);
	b = a * 1000 ;
	printf("Grams = %d gms.\n",b);
	getch();
	return 0;
}