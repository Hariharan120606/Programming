#include<stdio.h>
void main()
{
	int i,a,b,c,r;
	printf("Enter the range");
	scanf("%d",&r);
	a=0;b=1;
	printf("%d",a);
	printf("\n%d",b);
	printf("\n");
	c=0;
	do
	{
		c=a+b;
		if(c<=r)
		printf("%d\n",c);
		a=b;
		b=c;
	}
	while(c<=r);
	getch();
}
