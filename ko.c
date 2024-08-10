#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	char branch[15];
	int marks;
};
int main()
{
	struct student s1,s2;
	printf("\nEnter rollno:");
	scanf("%d",&s1.rollno);
	printf("\nEnter name:");
	scanf("%s",&s1.name);
	printf("\n Enter the batch:");
	scanf("%s",&s1.branch);
	printf("\n Total marks:");
	scanf("%d",&s1.marks);
	printf("\nStudent report");
	printf("\n Name is %d",s1.name);
	printf("\n Batch is %d",s1.branch);
	printf("\n Marks is %d",s1.marks);
	printf("\n Roll no is %d",s1.rollno);
	float percentage = (float)s1.marks * 100 / 100;
	s2 = s1;
	printf("\n The members of student s2:\n");
	printf("%d %s %s %d",s2.rollno,s2.name,s2.branch,s2.marks);
	return 0;
}
