#include <stdio.h>
#include <conio.h>
int main()
{
	float gs,ds,ns;
	clrscr();

	printf("Enter gross sales:");
	scanf("%f",&gs);

	ds = gs * 0.1;
	printf("discount: %.2f\n",ds); //Fixed the % sign

	ns = gs - ds;
	printf("Net sales: %.2f\n",ns);

	getch();
	return 0;
}
