#include<stdio.h>

void add(int num1, int num2);

int main()
{
    int num1;
    int num2;
    char user_name[50];
    
    printf("What is your name: ");
    scanf("%s", user_name);
    
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    printf("Enter a second number: ");
    scanf("%d", &num2);
    
    add(num1, num2);
    
    printf("Thank you %s, and have a nice day\n", user_name);
    
    return 0;
}

