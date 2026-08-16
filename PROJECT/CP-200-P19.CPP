#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a;
	float b;
	printf("Enter radius:");
	scanf("%d",&a);
	b = (22.0/7.0) * a * a;
	printf("Area = %.2f\n",b);
	getch();
	return 0;
}
