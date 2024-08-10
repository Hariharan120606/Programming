#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int roll_no;
    string name;
};
class Test {
public:
    int marks[5];
};
class Result : public Student, public Test {
public:
    int total_marks;
    float percentage;
};
int main() {
    Result student_result;
    cout << "Enter Roll Number: ";
    cin >> student_result.roll_no;
    cout << "Enter Name: ";
    cin >> student_result.name;
    cout << "Enter Marks in 5 Subjects: ";
    for (int i = 0; i < 5; ++i) {
        cin >> student_result.marks[i];
        student_result.total_marks += student_result.marks[i];
    }
    student_result.percentage = (static_cast<float>(student_result.total_marks) / 500) * 100;
    cout << "\nStudent Information:\n";
    cout << "Roll Number: " << student_result.roll_no << "\n";
    cout << "Name: " << student_result.name << "\n";
    cout << "Total Marks: " << student_result.total_marks << "\n";
    cout << "Percentage: " << student_result.percentage << "%\n";
    return 0;
}
