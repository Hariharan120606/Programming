#include <stdio.h>

struct Nest {
    char Name[10];
    int no;
    int m1, m2, m3; // Added marks variables
};

struct student {
    struct Nest n;
    int total;
    float avg;
};

struct employee {
    struct Nest n;
    float sal;
};

int main() {
    struct student s;
    struct employee e;

    printf("Student details\n");
    printf("Enter the student name: ");
    scanf("%s", s.n.Name);
    printf("Enter Roll no and marks (m1 m2 m3): ");
    scanf("%d %d %d %d", &s.n.no, &s.n.m1, &s.n.m2, &s.n.m3);

    s.total = s.n.m1 + s.n.m2 + s.n.m3;
    s.avg = s.total / 3.0;

    printf("\nStudent Information\n");
    printf("Name: %s\n", s.n.Name);
    printf("Roll no: %d\n", s.n.no);
    printf("Total Marks: %d\n", s.total);
    printf("Average Marks: %.2f\n", s.avg);

    printf("\nEmployee details\n");
    printf("Enter the employee name: ");
    scanf("%s", e.n.Name);
    printf("Enter the employee number: ");
    scanf("%d", &e.n.no);
    printf("Enter the employee salary: ");
    scanf("%f", &e.sal);

    printf("\nEmployee Information\n");
    printf("Name: %s\n", e.n.Name);
    printf("Employee Number: %d\n", e.n.no);
    printf("Salary: %.2f\n", e.sal);

    return 0;
}

