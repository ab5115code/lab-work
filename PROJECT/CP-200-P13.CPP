#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	float a,b,c,d;
	printf("Enter bytes:");
	scanf("%f",&a);
	b = a / 1024.00;
	c = a /(1024.00 * 1024.00);
	d = a / (1024.00 * 1024.00 * 1024.00);
	printf("Kilobytes = %.2f KB\n",b);    //2f means display the
	printf("Megabytes = %.2f MB\n",c); // float with 2 digits after decimal
	printf("Gigabytes = %.2f GB\n",d);
	getch();
	return 0;
}