#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	float c;
	printf("Enter height:");
	scanf("%d",&a);
	printf("Enter length:");
	scanf("%d",&b);
	c = (1.0/2.0) * a * b;
	printf("Area = %.2f\n",c);
	getch();                 -
	return 0;
}
