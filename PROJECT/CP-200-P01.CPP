#include <stdio.h> //header.file
#include <conio.h> //header.file
int main() //function

{/*Program to add 2Nos.*/
	clrscr();
	int a,b,c;
	printf("Enter 2 nos.:");
	scanf("%d%d",&a,&b);
	c = a + b; //add to nos.
	printf("%d + %d = %d\n",a,b,c);
	getch();
	return 0;
}