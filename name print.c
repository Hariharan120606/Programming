#include<stdio.h>
struct student
{
	int i,n;
	char month[10];
	int year;
};
struct person
{
	char name[25];
	int age;
	char sex;
	struct date dob;
};
void main()
{
	struct person p1;
	printf("Enter the name,age and sex \n");
	scanf("%s %d %c",&p1.name,&p1.age,&p1.sex);
	printf("Enter the date of birth : date, month in words and year \n");
	scanf("%d %s %d",&p1.dob.day,&p1.dob.month,&p1.dob.year);
	printf("The name,age and sex : \n");
	printf("%s %d %c\n",p1.name,p1.age,p1.sex);
	printf("Date of birth : \n");
	printf("%d - %s - %d\n",p1.dob.day,p1.dob.month,p1.dob.year);
}
