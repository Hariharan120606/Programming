#include<stdio.h>
void main()
{
	int a,b,c,r;
	printf("Enter range");
	scanf("%d",&r);
	a = 0;
	b = 1;
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("\n");
	c = 0;
	do 
	{
		c = a+b;
		if(c<=r)
			printf("%d\n",&c);
		a = b;
		b = c;
	} while(c<=r);
}
