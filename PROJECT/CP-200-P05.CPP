#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c,d,e;
	float f;
	printf("Enter two nos.");
	scanf("%d%d",&a,&b);
	c = a + b;
	printf("%d + %d = %d\n",a,b,c);

	d = a - b;
	printf("%d - %d = %d\n",a,b,d);
	
	e = a * b;
	printf("%d * %d = %d\n",a,b,e);

	f = (float)a / b;
	printf("%d / %d = %.2f\n",a,b,f);

	getch();
	return 0;
}
