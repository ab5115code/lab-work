#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	float p,r,n,i;
	printf("Enter pricipal :");
	scanf("%f",&p);
	printf("Enter rate of intrest :");
	scanf("%f",&r);
	printf("Enter time :");
	scanf("%f",&n);
	i = (p * r * n)/100;
	printf("Intrest = %.2frs\n",i);
	getch();
	return 0;
}
