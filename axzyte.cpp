#include <stdio.h>
struct Student 
{
    int regNumber;
    char name[50];
    int marks[5];
};

int main() {
    struct Student student;

    printf("Enter Registration Number: ");
    scanf("%d", &student.regNumber);

    printf("Enter Name: ");
    scanf("%s", student.name);

    printf("Enter Marks for 5 Subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);
    }

    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += student.marks[i];
    }

    float average = (float)total / 5;

    printf("\nStudent Details:\n");
    printf("Registration Number: %d\n", student.regNumber);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

