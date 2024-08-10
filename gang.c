#include<stdio.h>
int main()
{
	int b =10;
	int *p;
	p = &b;
	printf("%d \n",&b);
	printf("%d \n",*p);
	printf("%d \n",p);
	printf("%d \n",b);
	return 0;
}
