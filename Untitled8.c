#include<stdio.h>
#define pi 3.14
int main()
{
	int x,y,r,F;
	printf("Enter the value of temperature in Fahrenheit");
	scanf("%d",&F);
	printf("Enter the value of radius");
	scanf("%d",&r);
	printf("Enter the value of x and y");
	scanf("%d %d",&x,&y);
	int k = x+y;
	printf("\nThe sum is %d",k);
	int C = 5/9*(F-32);
	printf("\n The value of tem in celsius is %d C",C);
	float h = k/2;
	printf("\n The average is %f",h);
	int area = 2*pi*r;
	printf("\n The area is %d",area);
	return 0;
}
