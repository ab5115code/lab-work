#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	float g,a,d,s;
	printf("Enter gross salary:");
	scanf("%f",&g);
	a = g * 0.1;
	printf("Allowance = %.2frs\n",a);
	d = g * 0.03;
	printf("Deduction = %.2frs\n",d);
	s = (g + a) - d;
	printf("Salary = %.2frs\n",s);
	getch();
	return 0;
}
