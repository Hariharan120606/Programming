#include<stdio.h>
union student{
	int rno;
	char name[25];
	char branch[15];
};
void main()
{
	union student s1,s2;
	printf("Enter data\n");
	printf("\nEnter rno");
	scanf("%d",&s1.rno);
	printf("Enter name\n");
	scanf("%c",&s1.name);
	printf("\nEnter branch");
	scanf("%c",&s1.branch);
	printf("\n Roll no : %d",s1.rno);
	s2 = s1;
	printf("%c %c %d",s2.branch,s2.name,s2.rno);
}
